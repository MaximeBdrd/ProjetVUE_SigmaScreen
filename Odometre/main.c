/* 
 * main.c
 * Maxime Bédard
 */

#include <p24FJ256DA210.h>
#include "Board/Board.h"
#include "Graphics/Meter.h"
#include "Board/TimeDelay.h"

// Config bits, do not change. ever.
_CONFIG1( WDTPS_PS32768 & FWPSA_PR128 & ALTVREF_ALTVREDIS & WINDIS_OFF & FWDTEN_OFF & ICS_PGx2 & GWRP_OFF & GCP_OFF & JTAGEN_OFF)
_CONFIG2( POSCMOD_XT & IOL1WAY_OFF & OSCIOFNC_OFF & FCKSM_CSDCMD & FNOSC_PRIPLL & PLL96MHZ_ON & PLLDIV_DIV2 & IESO_OFF)
_CONFIG3( WPFP_WPFP255 & SOSCSEL_SOSC & WUTSEL_LEG & ALTPMP_ALTPMPEN & WPDIS_WPDIS & WPCFG_WPCFGDIS & WPEND_WPENDMEM)

/*
 * Any error will block the execution of the code, which should help debugging
 * If you choose the "release" configuration, the program will reboot instead of freezing
 * To do that, use the macro FREEZE() for unhandled situations
 */
int main(int argc, char** argv)
{   
    InitBoard(); //Startup sequence
    METER* m_meter = MtrCreate
(
            1,
           1,
           0,
           480,
           270,
            DRAW,
           10,
           0,
           100,
            0,
            0,
           "Speed",
    0
);

    // Infinite Loop
    SHORT m_speed = 10;
    while ( 1 )
    {
        // UI processing

        GOLDraw();
        m_speed += 3;
        if ( m_speed > 100)
            m_speed = 0;
        DelayMs(200);
        MtrSetVal(m_meter, m_speed);
        SetState(m_meter, MTR_DRAW_UPDATE);
    }

    return (1); // Return from main = Reboot
}

WORD            GOLMsgCallback(WORD objMsg, OBJ_HEADER *pObj, GOL_MSG *pMsg)
{
    return 1;
}

WORD            GOLDrawCallback(void)
{
    return 1;
}
