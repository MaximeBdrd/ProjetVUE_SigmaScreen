/* 
 * main.c
 * Maxime B�dard
 */

#include <p24FJ256DA210.h>
#include "Board/Board.h"
#include "Graphics/Meter.h"
#include "Board/TimeDelay.h"
#include "Graphics/DisplayDriver.h"
#include "Graphics/goodtimes72.h"
#include "Graphics/goodtimes36.h"
#include "ArcData.h"

#include <stdio.h>

// Config bits, do not change. ever.
_CONFIG1( WDTPS_PS32768 & FWPSA_PR128 & ALTVREF_ALTVREDIS & WINDIS_OFF & FWDTEN_OFF & ICS_PGx2 & GWRP_OFF & GCP_OFF & JTAGEN_OFF)
_CONFIG2( POSCMOD_XT & IOL1WAY_OFF & OSCIOFNC_OFF & FCKSM_CSDCMD & FNOSC_PRIPLL & PLL96MHZ_ON & PLLDIV_DIV2 & IESO_OFF)
_CONFIG3( WPFP_WPFP255 & SOSCSEL_SOSC & WUTSEL_LEG & ALTPMP_ALTPMPEN & WPDIS_WPDIS & WPCFG_WPCFGDIS & WPEND_WPENDMEM)

#define YBOTTOM_PRGBAR_LEFT 267

void UpdatePrgBarRight(WORD newHeight);
void UpdatePrgBarLeft(WORD newHeight);
void UpdateTextSpeed(WORD newSpeed);
void UpdateSpeedArc(int newSpeed);
void UpdateFlasher( unsigned char ucLeft, unsigned char ucRight);

/*
 * Any error will block the execution of the code, which should help debugging
 * If you choose the "release" configuration, the program will reboot instead of freezing
 * To do that, use the macro FREEZE() for unhandled situations
 */
int main(int argc, char** argv)
{   
    InitBoard(); //Startup sequence

    // Black background
    //SetColor(BLACK);
    //ClearDevice();

    // Infinite Loop
    SHORT m_speed = 0;

/* Input: xL, yT - location of the upper left center in the x,y coordinate
*		 xR, yB - location of the lower right left center in the x,y coordinate
*		 r1, r2 - the two concentric circle radii, r1 as the radius
*				  of the smaller circle and and r2 as the radius of the
*				  larger circle.
*		 octant - bitmask of the octant that will be drawn.
*				  Moving in a clockwise direction from x = 0, y = +radius
*                 bit0 : first octant 	bit4 : fifth octant
*                 bit1 : second octant  bit5 : sixth octant
*                 bit2 : third octant   bit6 : seventh octant
*                 bit3 : fourth octant  bit7 : eigth octant */
    /*SetColor(RGBConvert(0xFF, 0, 0));
    Arc(480>>1, 200, 480>>1, 200, 160, 180, 0xE7);

    SetColor(RGBConvert(0x00, 0, 0xFF));
    Arc(480>>1, 200, 480>>1, 200, 140, 160, 0xE7);

    // Draw a progress bar p1=(5, 5) p2=(55, 267) on the left
    SetColor(RGBConvert(0, 0xFF, 0xFF));
    Bar(5, 5, 55, 267);
    //SetColor(RGBConvert(0xFF, 0xFF, 0));
    //Bar(5, 100, 55, 267);

    // Draw a progress bar p1=(5, 5) p2=(55, 267) on the right
    SetColor(RGBConvert(0, 0xFF, 0xFF));
    Bar(480-5-50, 5, 480-5, 267);
    //SetColor(RGBConvert(0xFF, 0xFF, 0));
    //Bar(480-5-50, 80, 480-5, 267);*/

    PutImageFromSD(0, 0, "vue.bin", 1);

    // Display the text for the current speed
    WORD text_width = GetTextWidthFlash("72", (void*)&good_times_rg_72);
    SetFont((void*)&good_times_rg_72);
    SetColor(WHITE);
    // place the string at the center of the screen
    MoveTo((480>>1)-(text_width>>1), (272>>1)-(72>>1)+15);
    OutText("72");

    // Display the text for the current distance
    text_width = GetTextWidthFlash("018", (void*)&good_times_rg_36);
    SetFont((void*)&good_times_rg_36);
    SetColor(WHITE);
    // place the string at the bottom center of the screen
    MoveTo((480>>1)-(text_width>>1)-18, 270-36); // Offset de 18
    OutText("018");

    WORD dir = 0;
    WORD flagArrows = 0;
    
    while ( 1 )
    {
        // UI processing
        GOLDraw();
        if ( dir )
            m_speed -= 1;
        else
            m_speed += 1;

        if ( m_speed > 119 || m_speed == 0)
        {
            dir = dir ? 0 : 1;
        }

        if ( (m_speed > 60) && flagArrows == 0 ) //!= (dir==0) )
        {
            flagArrows = 1;
            PutImageFromSD(76, 11, "leftaon.bin", 1);
            PutImageFromSD(354, 13, "rigaoff.bin", 1);
        }
        else if ((m_speed < 60) && flagArrows == 1)
        {
            flagArrows = 0;
            PutImageFromSD(76, 11, "leftaoff.bin", 1);
            PutImageFromSD(354, 13, "rigaon.bin", 1);
        }

        DelayMs(30);
        //UpdatePrgBarRight(m_speed);
        //UpdatePrgBarLeft(m_speed+50);
        //UpdateTextSpeed(m_speed);
        UpdateSpeedArc(m_speed);
    }

    return (1); // Return from main = Reboot
}

void UpdateFlasher( unsigned char ucLeft, unsigned char ucRight)
{
    static unsigned char oldLeft = 0;
    static unsigned char oldRight = 0;

    if ( oldLeft != ucLeft )
    {
        if ( ucLeft > 0 )
        {
            PutImageFromSD(76, 11, "lefaon.bin", 1);
        }
        else
        {
            PutImageFromSD(76, 11, "leftaoff.bin", 1);
        }

        oldLeft = ucLeft;
    }

    if ( oldRight != ucRight  )
    {
        if ( ucRight > 0 )
        {
            PutImageFromSD(354, 13, "rigaon.bin", 1);
        }
        else
        {
            PutImageFromSD(354, 13, "rigaoff.bin", 1);
        }

        oldRight = ucRight;
    }
}

void UpdateSpeedArc(int newSpeed)
{
    static int oldSpeed = 0;

    if ( newSpeed >= ARC_ANGLE_SPAN )
        newSpeed = ARC_ANGLE_SPAN - 1;

    if ( newSpeed < 0 )
        newSpeed = 0;

    if ( oldSpeed == newSpeed )
        return;

    // Depending of which way we are going, we have to activate or deactivate pixels
    int angle;
    if ( oldSpeed < newSpeed )
    {
        // Activating pixels
        //SetColor(RGBConvert(22, 23, 251));
        for( angle = oldSpeed; angle < newSpeed; angle++)
        {
            unsigned short ucSize = ArcDataSize[angle];
            WORD i;
            if( angle < 54 )
                SetColor(RGBConvert((40+(angle*3)), 200, 19));
            else if ( angle < 108 )
                SetColor(RGBConvert(200, (200-((angle-54)*3)), 19));
            else
                SetColor(RGBConvert(200, 40, 19));

            for( i = 0; i < ucSize; i++ )
            {
                Bar( ArcData[angle][i].PosX, ArcData[angle][i].PosY, ArcData[angle][i].PosX + ArcData[angle][i].Len, ArcData[angle][i].PosY); // Bar(SHORT left, SHORT top, SHORT right, SHORT bottom)
            }
        }
    }
    else
    {
        // Deactivating pixels
        SetColor(BLACK);
        for( angle = oldSpeed - 1; angle >= newSpeed; angle--)
        {
            unsigned short ucSize = ArcDataSize[angle];
            WORD i;
            for( i = 0; i < ucSize; i++ )
            {
                Bar( ArcData[angle][i].PosX, ArcData[angle][i].PosY, ArcData[angle][i].PosX + ArcData[angle][i].Len, ArcData[angle][i].PosY); // Bar(SHORT left, SHORT top, SHORT right, SHORT bottom)
            }
        }
    }

    oldSpeed = newSpeed;
}

void UpdateTextSpeed(WORD newSpeed)
{
    static WORD oldSpeed = 0;
    if (oldSpeed != newSpeed)
    {
        // Erase the old text
        SetColor(BLACK);
        while(!Bar((480>>1)-(180>>1), (272>>1)-(72>>1), (480>>1)+(180>>1), (272>>1)+(72>>1)+1));

        // Write the new text
        XCHAR atext[6];
        sprintf(atext, "%d", newSpeed);
        WORD text_width = GetTextWidthFlash(atext, (void*)&good_times_rg_72);
        SetFont((void*)&good_times_rg_72);
        SetColor(WHITE);
        // place the string at the center of the screen
        MoveTo((480>>1)-(text_width>>1), (272>>1)-(72>>1));
        OutText(atext);
        
        oldSpeed = newSpeed;
    }
}

void UpdatePrgBarRight(WORD newHeight)
{
    static WORD oldHeight = 0;
    if ( oldHeight != newHeight )
    {
        // Check which picture we have to draw
        if ( oldHeight < newHeight )
        {
            // Increasing height (draw just the updated part)
            SetColor(RGBConvert(0xFF, 0xFF, 0));
            Bar(480-5-50, YBOTTOM_PRGBAR_LEFT-newHeight, 480-5, YBOTTOM_PRGBAR_LEFT-oldHeight);
        }
        else
        {
            // Decreasing height
            SetColor(RGBConvert(0, 0xFF, 0xFF));
            Bar(480-5-50, YBOTTOM_PRGBAR_LEFT-oldHeight, 480-5, YBOTTOM_PRGBAR_LEFT-newHeight);
        }
        oldHeight = newHeight;
    }
}

void UpdatePrgBarLeft(WORD newHeight)
{
    static WORD oldHeight = 0;
    if ( oldHeight != newHeight )
    {
        // Check which picture we have to draw
        if ( oldHeight < newHeight )
        {
            // Increasing height (draw just the updated part)
            SetColor(RGBConvert(0xFF, 0xFF, 0));
            Bar(5, YBOTTOM_PRGBAR_LEFT-newHeight, 55, YBOTTOM_PRGBAR_LEFT-oldHeight);
        }
        else
        {
            // Decreasing height
            SetColor(RGBConvert(0, 0xFF, 0xFF));
            Bar(5, YBOTTOM_PRGBAR_LEFT-oldHeight, 55, YBOTTOM_PRGBAR_LEFT-newHeight);
        }
        oldHeight = newHeight;
    }
}

WORD            GOLMsgCallback(WORD objMsg, OBJ_HEADER *pObj, GOL_MSG *pMsg)
{
    return 1;
}

WORD            GOLDrawCallback(void)
{
    return 1;
}
