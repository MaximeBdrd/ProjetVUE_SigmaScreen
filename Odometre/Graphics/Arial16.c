/*****************************************************************************
 * FileName:        Arial16.c
 * Processor:       PIC24F, PIC24H, dsPIC
 * Compiler:        MPLAB C30 (see release notes for tested revision)
 * Linker:          MPLAB LINK30
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright(c) 2012 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED “AS IS” WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 *
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * AUTO-GENERATED CODE:  Graphics Resource Converter version: 3.17.47
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Includes
 *****************************************************************************/
#include "Graphics.h"
#include "../Board/HardwareProfile.h"

/*****************************************************************************
 * SECTION:  Graphics Library Firmware Check
 *****************************************************************************/
#if(GRAPHICS_LIBRARY_VERSION != 0x0304)
#warning "It is suggested to use Graphics Library verson 3.04 with this version of GRC."
#endif

/*****************************************************************************
 * Converted Resources
 * -------------------
 *
 *
 * Fonts
 * -----
 * arial_16 - Height: 19 pixels, 1 bit per pixel, Range: ' ' to '~'
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * TTF Font File Structure
 * Label: arial_16
 * Description:  Height: 19 pixels, 1 bit per pixel, Range: ' ' to '~'
 ***********************************/

extern const char __arial_16[] __attribute__((aligned(2)));

const FONT_FLASH arial_16 =
{
    (FLASH | COMP_NONE),
    __arial_16
};

const char __arial_16[] __attribute__((aligned(2))) =
{
/****************************************
 * Font header
 ****************************************/
    0x00,           // Font ID
    0x00,           // Font information:  1 bit per pixel, Characters zero degress rotation
    0x20, 0x00,     // First Character
    0x7E, 0x00,     // Last Character
    0x13, 0x00,     // Height
/****************************************
 * Font Glyph Table
 ****************************************/
    0x04,              // width of the glyph
    0x84, 0x01, 0x00,  // Character - 32, offset (0x00000184)
    0x05,              // width of the glyph
    0x97, 0x01, 0x00,  // Character - 33, offset (0x00000197)
    0x06,              // width of the glyph
    0xAA, 0x01, 0x00,  // Character - 34, offset (0x000001AA)
    0x09,              // width of the glyph
    0xBD, 0x01, 0x00,  // Character - 35, offset (0x000001BD)
    0x09,              // width of the glyph
    0xE3, 0x01, 0x00,  // Character - 36, offset (0x000001E3)
    0x0E,              // width of the glyph
    0x09, 0x02, 0x00,  // Character - 37, offset (0x00000209)
    0x0B,              // width of the glyph
    0x2F, 0x02, 0x00,  // Character - 38, offset (0x0000022F)
    0x03,              // width of the glyph
    0x55, 0x02, 0x00,  // Character - 39, offset (0x00000255)
    0x05,              // width of the glyph
    0x68, 0x02, 0x00,  // Character - 40, offset (0x00000268)
    0x05,              // width of the glyph
    0x7B, 0x02, 0x00,  // Character - 41, offset (0x0000027B)
    0x06,              // width of the glyph
    0x8E, 0x02, 0x00,  // Character - 42, offset (0x0000028E)
    0x09,              // width of the glyph
    0xA1, 0x02, 0x00,  // Character - 43, offset (0x000002A1)
    0x04,              // width of the glyph
    0xC7, 0x02, 0x00,  // Character - 44, offset (0x000002C7)
    0x05,              // width of the glyph
    0xDA, 0x02, 0x00,  // Character - 45, offset (0x000002DA)
    0x04,              // width of the glyph
    0xED, 0x02, 0x00,  // Character - 46, offset (0x000002ED)
    0x04,              // width of the glyph
    0x00, 0x03, 0x00,  // Character - 47, offset (0x00000300)
    0x09,              // width of the glyph
    0x13, 0x03, 0x00,  // Character - 48, offset (0x00000313)
    0x09,              // width of the glyph
    0x39, 0x03, 0x00,  // Character - 49, offset (0x00000339)
    0x09,              // width of the glyph
    0x5F, 0x03, 0x00,  // Character - 50, offset (0x0000035F)
    0x09,              // width of the glyph
    0x85, 0x03, 0x00,  // Character - 51, offset (0x00000385)
    0x09,              // width of the glyph
    0xAB, 0x03, 0x00,  // Character - 52, offset (0x000003AB)
    0x09,              // width of the glyph
    0xD1, 0x03, 0x00,  // Character - 53, offset (0x000003D1)
    0x09,              // width of the glyph
    0xF7, 0x03, 0x00,  // Character - 54, offset (0x000003F7)
    0x09,              // width of the glyph
    0x1D, 0x04, 0x00,  // Character - 55, offset (0x0000041D)
    0x09,              // width of the glyph
    0x43, 0x04, 0x00,  // Character - 56, offset (0x00000443)
    0x09,              // width of the glyph
    0x69, 0x04, 0x00,  // Character - 57, offset (0x00000469)
    0x04,              // width of the glyph
    0x8F, 0x04, 0x00,  // Character - 58, offset (0x0000048F)
    0x04,              // width of the glyph
    0xA2, 0x04, 0x00,  // Character - 59, offset (0x000004A2)
    0x09,              // width of the glyph
    0xB5, 0x04, 0x00,  // Character - 60, offset (0x000004B5)
    0x09,              // width of the glyph
    0xDB, 0x04, 0x00,  // Character - 61, offset (0x000004DB)
    0x09,              // width of the glyph
    0x01, 0x05, 0x00,  // Character - 62, offset (0x00000501)
    0x09,              // width of the glyph
    0x27, 0x05, 0x00,  // Character - 63, offset (0x00000527)
    0x10,              // width of the glyph
    0x4D, 0x05, 0x00,  // Character - 64, offset (0x0000054D)
    0x0B,              // width of the glyph
    0x73, 0x05, 0x00,  // Character - 65, offset (0x00000573)
    0x0B,              // width of the glyph
    0x99, 0x05, 0x00,  // Character - 66, offset (0x00000599)
    0x0C,              // width of the glyph
    0xBF, 0x05, 0x00,  // Character - 67, offset (0x000005BF)
    0x0C,              // width of the glyph
    0xE5, 0x05, 0x00,  // Character - 68, offset (0x000005E5)
    0x0B,              // width of the glyph
    0x0B, 0x06, 0x00,  // Character - 69, offset (0x0000060B)
    0x0A,              // width of the glyph
    0x31, 0x06, 0x00,  // Character - 70, offset (0x00000631)
    0x0C,              // width of the glyph
    0x57, 0x06, 0x00,  // Character - 71, offset (0x00000657)
    0x0B,              // width of the glyph
    0x7D, 0x06, 0x00,  // Character - 72, offset (0x0000067D)
    0x03,              // width of the glyph
    0xA3, 0x06, 0x00,  // Character - 73, offset (0x000006A3)
    0x08,              // width of the glyph
    0xB6, 0x06, 0x00,  // Character - 74, offset (0x000006B6)
    0x0B,              // width of the glyph
    0xC9, 0x06, 0x00,  // Character - 75, offset (0x000006C9)
    0x09,              // width of the glyph
    0xEF, 0x06, 0x00,  // Character - 76, offset (0x000006EF)
    0x0D,              // width of the glyph
    0x15, 0x07, 0x00,  // Character - 77, offset (0x00000715)
    0x0B,              // width of the glyph
    0x3B, 0x07, 0x00,  // Character - 78, offset (0x0000073B)
    0x0C,              // width of the glyph
    0x61, 0x07, 0x00,  // Character - 79, offset (0x00000761)
    0x0B,              // width of the glyph
    0x87, 0x07, 0x00,  // Character - 80, offset (0x00000787)
    0x0C,              // width of the glyph
    0xAD, 0x07, 0x00,  // Character - 81, offset (0x000007AD)
    0x0B,              // width of the glyph
    0xD3, 0x07, 0x00,  // Character - 82, offset (0x000007D3)
    0x0B,              // width of the glyph
    0xF9, 0x07, 0x00,  // Character - 83, offset (0x000007F9)
    0x09,              // width of the glyph
    0x1F, 0x08, 0x00,  // Character - 84, offset (0x0000081F)
    0x0B,              // width of the glyph
    0x45, 0x08, 0x00,  // Character - 85, offset (0x00000845)
    0x0B,              // width of the glyph
    0x6B, 0x08, 0x00,  // Character - 86, offset (0x0000086B)
    0x0F,              // width of the glyph
    0x91, 0x08, 0x00,  // Character - 87, offset (0x00000891)
    0x0B,              // width of the glyph
    0xB7, 0x08, 0x00,  // Character - 88, offset (0x000008B7)
    0x09,              // width of the glyph
    0xDD, 0x08, 0x00,  // Character - 89, offset (0x000008DD)
    0x09,              // width of the glyph
    0x03, 0x09, 0x00,  // Character - 90, offset (0x00000903)
    0x04,              // width of the glyph
    0x29, 0x09, 0x00,  // Character - 91, offset (0x00000929)
    0x04,              // width of the glyph
    0x3C, 0x09, 0x00,  // Character - 92, offset (0x0000093C)
    0x04,              // width of the glyph
    0x4F, 0x09, 0x00,  // Character - 93, offset (0x0000094F)
    0x07,              // width of the glyph
    0x62, 0x09, 0x00,  // Character - 94, offset (0x00000962)
    0x09,              // width of the glyph
    0x75, 0x09, 0x00,  // Character - 95, offset (0x00000975)
    0x05,              // width of the glyph
    0x9B, 0x09, 0x00,  // Character - 96, offset (0x0000099B)
    0x09,              // width of the glyph
    0xAE, 0x09, 0x00,  // Character - 97, offset (0x000009AE)
    0x09,              // width of the glyph
    0xD4, 0x09, 0x00,  // Character - 98, offset (0x000009D4)
    0x08,              // width of the glyph
    0xFA, 0x09, 0x00,  // Character - 99, offset (0x000009FA)
    0x09,              // width of the glyph
    0x0D, 0x0A, 0x00,  // Character - 100, offset (0x00000A0D)
    0x09,              // width of the glyph
    0x33, 0x0A, 0x00,  // Character - 101, offset (0x00000A33)
    0x04,              // width of the glyph
    0x59, 0x0A, 0x00,  // Character - 102, offset (0x00000A59)
    0x09,              // width of the glyph
    0x6C, 0x0A, 0x00,  // Character - 103, offset (0x00000A6C)
    0x08,              // width of the glyph
    0x92, 0x0A, 0x00,  // Character - 104, offset (0x00000A92)
    0x04,              // width of the glyph
    0xA5, 0x0A, 0x00,  // Character - 105, offset (0x00000AA5)
    0x03,              // width of the glyph
    0xB8, 0x0A, 0x00,  // Character - 106, offset (0x00000AB8)
    0x08,              // width of the glyph
    0xCB, 0x0A, 0x00,  // Character - 107, offset (0x00000ACB)
    0x03,              // width of the glyph
    0xDE, 0x0A, 0x00,  // Character - 108, offset (0x00000ADE)
    0x0D,              // width of the glyph
    0xF1, 0x0A, 0x00,  // Character - 109, offset (0x00000AF1)
    0x08,              // width of the glyph
    0x17, 0x0B, 0x00,  // Character - 110, offset (0x00000B17)
    0x09,              // width of the glyph
    0x2A, 0x0B, 0x00,  // Character - 111, offset (0x00000B2A)
    0x09,              // width of the glyph
    0x50, 0x0B, 0x00,  // Character - 112, offset (0x00000B50)
    0x09,              // width of the glyph
    0x76, 0x0B, 0x00,  // Character - 113, offset (0x00000B76)
    0x05,              // width of the glyph
    0x9C, 0x0B, 0x00,  // Character - 114, offset (0x00000B9C)
    0x08,              // width of the glyph
    0xAF, 0x0B, 0x00,  // Character - 115, offset (0x00000BAF)
    0x04,              // width of the glyph
    0xC2, 0x0B, 0x00,  // Character - 116, offset (0x00000BC2)
    0x08,              // width of the glyph
    0xD5, 0x0B, 0x00,  // Character - 117, offset (0x00000BD5)
    0x07,              // width of the glyph
    0xE8, 0x0B, 0x00,  // Character - 118, offset (0x00000BE8)
    0x0B,              // width of the glyph
    0xFB, 0x0B, 0x00,  // Character - 119, offset (0x00000BFB)
    0x07,              // width of the glyph
    0x21, 0x0C, 0x00,  // Character - 120, offset (0x00000C21)
    0x07,              // width of the glyph
    0x34, 0x0C, 0x00,  // Character - 121, offset (0x00000C34)
    0x07,              // width of the glyph
    0x47, 0x0C, 0x00,  // Character - 122, offset (0x00000C47)
    0x05,              // width of the glyph
    0x5A, 0x0C, 0x00,  // Character - 123, offset (0x00000C5A)
    0x03,              // width of the glyph
    0x6D, 0x0C, 0x00,  // Character - 124, offset (0x00000C6D)
    0x05,              // width of the glyph
    0x80, 0x0C, 0x00,  // Character - 125, offset (0x00000C80)
    0x09,              // width of the glyph
    0x93, 0x0C, 0x00,  // Character - 126, offset (0x00000C93)
/***********************************
 * Font Characters
 ***********************************/
/***********************************
 * Character - 32
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 33
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x00,         //         
    0x04,         //   *     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 34
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 35
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x44, 0x00,         //   *   *         
    0xFF, 0x01,         // *********       
    0x44, 0x00,         //   *   *         
    0x44, 0x00,         //   *   *         
    0x44, 0x00,         //   *   *         
    0xFF, 0x01,         // *********       
    0x22, 0x00,         //  *   *          
    0x22, 0x00,         //  *   *          
    0x22, 0x00,         //  *   *          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 36
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x10, 0x00,         //     *           
    0x78, 0x00,         //    ****         
    0x54, 0x00,         //   * * *         
    0x92, 0x00,         //  *  *  *        
    0x12, 0x00,         //  *  *           
    0x12, 0x00,         //  *  *           
    0x1C, 0x00,         //   ***           
    0x78, 0x00,         //    ****         
    0x90, 0x00,         //     *  *        
    0x90, 0x00,         //     *  *        
    0x92, 0x00,         //  *  *  *        
    0x54, 0x00,         //   * * *         
    0x38, 0x00,         //    ***          
    0x10, 0x00,         //     *           
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 37
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x1C, 0x02,         //   ***    *      
    0x22, 0x01,         //  *   *  *       
    0x22, 0x01,         //  *   *  *       
    0xA2, 0x00,         //  *   * *        
    0xA2, 0x00,         //  *   * *        
    0x9C, 0x00,         //   ***  *        
    0x40, 0x0E,         //       *  ***    
    0x40, 0x11,         //       * *   *   
    0x20, 0x11,         //      *  *   *   
    0x20, 0x11,         //      *  *   *   
    0x10, 0x11,         //     *   *   *   
    0x10, 0x0E,         //     *    ***    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 38
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x44, 0x00,         //   *   *         
    0x44, 0x00,         //   *   *         
    0x28, 0x00,         //    * *          
    0x18, 0x00,         //    **           
    0x14, 0x00,         //   * *           
    0x22, 0x02,         //  *   *   *      
    0x42, 0x01,         //  *    * *       
    0x82, 0x00,         //  *     *        
    0x44, 0x01,         //   *   * *       
    0x38, 0x02,         //    ***   *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 39
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 40
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x08,         //    *    
    0x00,         //         

/***********************************
 * Character - 41
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x02,         //  *      
    0x00,         //         

/***********************************
 * Character - 42
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x1F,         // *****   
    0x04,         //   *     
    0x0A,         //  * *    
    0x0A,         //  * *    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 43
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0xFE, 0x00,         //  *******        
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 44
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 45
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 46
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 47
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x08,         //    *    
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x01,         // *       
    0x01,         // *       
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 48
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x44, 0x00,         //   *   *         
    0x38, 0x00,         //    ***          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 49
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x20, 0x00,         //      *          
    0x30, 0x00,         //     **          
    0x28, 0x00,         //    * *          
    0x24, 0x00,         //   *  *          
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 50
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x82, 0x00,         //  *     *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x20, 0x00,         //      *          
    0x10, 0x00,         //     *           
    0x08, 0x00,         //    *            
    0x04, 0x00,         //   *             
    0xFE, 0x00,         //  *******        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 51
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x42, 0x00,         //  *    *         
    0x40, 0x00,         //       *         
    0x60, 0x00,         //      **         
    0x38, 0x00,         //    ***          
    0x40, 0x00,         //       *         
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x82, 0x00,         //  *     *        
    0x44, 0x00,         //   *   *         
    0x38, 0x00,         //    ***          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 52
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0x60, 0x00,         //      **         
    0x50, 0x00,         //     * *         
    0x48, 0x00,         //    *  *         
    0x48, 0x00,         //    *  *         
    0x44, 0x00,         //   *   *         
    0x42, 0x00,         //  *    *         
    0x41, 0x00,         // *     *         
    0xFF, 0x00,         // ********        
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 53
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFC, 0x00,         //   ******        
    0x04, 0x00,         //   *             
    0x04, 0x00,         //   *             
    0x02, 0x00,         //  *              
    0x3E, 0x00,         //  *****          
    0x42, 0x00,         //  *    *         
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x82, 0x00,         //  *     *        
    0x44, 0x00,         //   *   *         
    0x38, 0x00,         //    ***          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 54
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x82, 0x00,         //  *     *        
    0x02, 0x00,         //  *              
    0x3A, 0x00,         //  * ***          
    0x46, 0x00,         //  **   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x44, 0x00,         //   *   *         
    0x38, 0x00,         //    ***          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 55
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFC, 0x00,         //   ******        
    0x80, 0x00,         //        *        
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 56
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x44, 0x00,         //   *   *         
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x44, 0x00,         //   *   *         
    0x38, 0x00,         //    ***          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 57
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0xC4, 0x00,         //   *   **        
    0xB8, 0x00,         //    *** *        
    0x80, 0x00,         //        *        
    0x82, 0x00,         //  *     *        
    0x44, 0x00,         //   *   *         
    0x38, 0x00,         //    ***          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 58
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 59
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 60
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x70, 0x00,         //     ***         
    0x0C, 0x00,         //   **            
    0x02, 0x00,         //  *              
    0x0C, 0x00,         //   **            
    0x70, 0x00,         //     ***         
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 61
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x00,         //  *******        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x00,         //  *******        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 62
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x00,         //  *              
    0x1C, 0x00,         //   ***           
    0x60, 0x00,         //      **         
    0x80, 0x00,         //        *        
    0x60, 0x00,         //      **         
    0x1C, 0x00,         //   ***           
    0x02, 0x00,         //  *              
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 63
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x80, 0x00,         //        *        
    0x40, 0x00,         //       *         
    0x20, 0x00,         //      *          
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x00, 0x00,         //                 
    0x10, 0x00,         //     *           
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 64
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xC0, 0x0F,         //       ******    
    0x30, 0x30,         //     **      **  
    0x08, 0x40,         //    *          * 
    0x84, 0x4B,         //   *    *** *  * 
    0x44, 0x8C,         //   *   *   **   *
    0x22, 0x88,         //  *   *     *   *
    0x12, 0x88,         //  *  *      *   *
    0x12, 0x84,         //  *  *     *    *
    0x12, 0x84,         //  *  *     *    *
    0x12, 0x44,         //  *  *     *   * 
    0x22, 0x26,         //  *   *   **  *  
    0xC4, 0x1D,         //   *   *** ***   
    0x08, 0x80,         //    *           *
    0x30, 0x60,         //     **       ** 
    0xC0, 0x1F,         //       *******   
    0x00, 0x00,         //                 

/***********************************
 * Character - 65
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x20, 0x00,         //      *          
    0x50, 0x00,         //     * *         
    0x50, 0x00,         //     * *         
    0x50, 0x00,         //     * *         
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0xFC, 0x01,         //   *******       
    0x04, 0x01,         //   *     *       
    0x04, 0x01,         //   *     *       
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 66
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x00,         //  *******        
    0x02, 0x01,         //  *      *       
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x01,         //  *      *       
    0xFE, 0x00,         //  *******        
    0x02, 0x01,         //  *      *       
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x01,         //  *      *       
    0xFE, 0x00,         //  *******        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 67
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF0, 0x01,         //     *****       
    0x08, 0x02,         //    *     *      
    0x04, 0x04,         //   *       *     
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x04, 0x04,         //   *       *     
    0x08, 0x02,         //    *     *      
    0xF0, 0x01,         //     *****       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 68
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x00,         //  *******        
    0x02, 0x01,         //  *      *       
    0x02, 0x02,         //  *       *      
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x02,         //  *       *      
    0x02, 0x01,         //  *      *       
    0xFE, 0x00,         //  *******        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 69
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x03,         //  *********      
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0xFE, 0x01,         //  ********       
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0xFE, 0x03,         //  *********      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 70
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x01,         //  ********       
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0xFE, 0x00,         //  *******        
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 71
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF0, 0x00,         //     ****        
    0x08, 0x01,         //    *    *       
    0x04, 0x02,         //   *      *      
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0xC2, 0x07,         //  *    *****     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x04, 0x02,         //   *      *      
    0x08, 0x01,         //    *    *       
    0xF0, 0x00,         //     ****        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 72
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0xFE, 0x03,         //  *********      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 73
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 74
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x40,         //       * 
    0x40,         //       * 
    0x40,         //       * 
    0x40,         //       * 
    0x40,         //       * 
    0x40,         //       * 
    0x40,         //       * 
    0x40,         //       * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x3C,         //   ****  
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 75
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x02,         //  *       *      
    0x02, 0x01,         //  *      *       
    0x82, 0x00,         //  *     *        
    0x42, 0x00,         //  *    *         
    0x22, 0x00,         //  *   *          
    0x32, 0x00,         //  *  **          
    0x2A, 0x00,         //  * * *          
    0x46, 0x00,         //  **   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x02, 0x01,         //  *      *       
    0x02, 0x02,         //  *       *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 76
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0xFE, 0x00,         //  *******        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 77
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x08,         //  *         *    
    0x06, 0x0C,         //  **       **    
    0x06, 0x0C,         //  **       **    
    0x0A, 0x0A,         //  * *     * *    
    0x0A, 0x0A,         //  * *     * *    
    0x12, 0x09,         //  *  *   *  *    
    0x12, 0x09,         //  *  *   *  *    
    0xA2, 0x08,         //  *   * *   *    
    0xA2, 0x08,         //  *   * *   *    
    0xA2, 0x08,         //  *   * *   *    
    0x42, 0x08,         //  *    *    *    
    0x42, 0x08,         //  *    *    *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 78
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x02,         //  *       *      
    0x06, 0x02,         //  **      *      
    0x0A, 0x02,         //  * *     *      
    0x0A, 0x02,         //  * *     *      
    0x12, 0x02,         //  *  *    *      
    0x22, 0x02,         //  *   *   *      
    0x22, 0x02,         //  *   *   *      
    0x42, 0x02,         //  *    *  *      
    0x82, 0x02,         //  *     * *      
    0x82, 0x02,         //  *     * *      
    0x02, 0x03,         //  *      **      
    0x02, 0x02,         //  *       *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 79
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF0, 0x00,         //     ****        
    0x08, 0x01,         //    *    *       
    0x04, 0x02,         //   *      *      
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x04, 0x02,         //   *      *      
    0x08, 0x01,         //    *    *       
    0xF0, 0x00,         //     ****        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 80
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x00,         //  *******        
    0x02, 0x01,         //  *      *       
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x01,         //  *      *       
    0xFE, 0x00,         //  *******        
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 81
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF0, 0x00,         //     ****        
    0x08, 0x01,         //    *    *       
    0x04, 0x02,         //   *      *      
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0x02, 0x04,         //  *        *     
    0xC4, 0x02,         //   *   ** *      
    0x08, 0x03,         //    *    **      
    0xF0, 0x06,         //     **** **     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 82
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x00,         //  *******        
    0x02, 0x01,         //  *      *       
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x01,         //  *      *       
    0xFE, 0x00,         //  *******        
    0x42, 0x00,         //  *    *         
    0xC2, 0x00,         //  *    **        
    0x82, 0x00,         //  *     *        
    0x02, 0x01,         //  *      *       
    0x02, 0x02,         //  *       *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 83
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF8, 0x00,         //    *****        
    0x04, 0x01,         //   *     *       
    0x02, 0x02,         //  *       *      
    0x02, 0x00,         //  *              
    0x04, 0x00,         //   *             
    0x38, 0x00,         //    ***          
    0xC0, 0x01,         //       ***       
    0x00, 0x02,         //          *      
    0x00, 0x02,         //          *      
    0x02, 0x02,         //  *       *      
    0x04, 0x01,         //   *     *       
    0xF8, 0x00,         //    *****        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 84
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFF, 0x01,         // *********       
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 85
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x04, 0x01,         //   *     *       
    0xF8, 0x00,         //    *****        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 86
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x04, 0x01,         //   *     *       
    0x04, 0x01,         //   *     *       
    0x04, 0x01,         //   *     *       
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x50, 0x00,         //     * *         
    0x50, 0x00,         //     * *         
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 87
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x81, 0x40,         // *      *      * 
    0x41, 0x41,         // *     * *     * 
    0x42, 0x21,         //  *    * *    *  
    0x42, 0x21,         //  *    * *    *  
    0x22, 0x22,         //  *   *   *   *  
    0x22, 0x22,         //  *   *   *   *  
    0x24, 0x12,         //   *  *   *  *   
    0x14, 0x14,         //   * *     * *   
    0x14, 0x14,         //   * *     * *   
    0x14, 0x14,         //   * *     * *   
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 88
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x02,         //  *       *      
    0x04, 0x01,         //   *     *       
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x50, 0x00,         //     * *         
    0x20, 0x00,         //      *          
    0x50, 0x00,         //     * *         
    0x88, 0x00,         //    *   *        
    0x84, 0x00,         //   *    *        
    0x04, 0x01,         //   *     *       
    0x02, 0x02,         //  *       *      
    0x01, 0x04,         // *         *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 89
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x01, 0x01,         // *       *       
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x44, 0x00,         //   *   *         
    0x28, 0x00,         //    * *          
    0x28, 0x00,         //    * *          
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 90
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x01,         //  ********       
    0x80, 0x00,         //        *        
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x20, 0x00,         //      *          
    0x10, 0x00,         //     *           
    0x10, 0x00,         //     *           
    0x08, 0x00,         //    *            
    0x04, 0x00,         //   *             
    0x04, 0x00,         //   *             
    0x02, 0x00,         //  *              
    0xFF, 0x01,         // *********       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 91
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x0E,         //  ***    
    0x00,         //         

/***********************************
 * Character - 92
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x01,         // *       
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 93
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x07,         // ***     
    0x00,         //         

/***********************************
 * Character - 94
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x14,         //   * *   
    0x14,         //   * *   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x41,         // *     * 
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 95
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFF, 0x01,         // *********       
    0x00, 0x00,         //                 

/***********************************
 * Character - 96
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x0C,         //   **
    0x12,         //  *  *
    0x12,         //  *  *
    0x0C,         //   **
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 97
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x78, 0x00,         //    ****         
    0x84, 0x00,         //   *    *        
    0x82, 0x00,         //  *     *        
    0xE0, 0x00,         //      ***        
    0x9C, 0x00,         //   ***  *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0xC2, 0x00,         //  *    **        
    0xBC, 0x00,         //   **** *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 98
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x3A, 0x00,         //  * ***          
    0x46, 0x00,         //  **   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x46, 0x00,         //  **   *         
    0x3A, 0x00,         //  * ***          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 99
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x38,         //    ***  
    0x44,         //   *   * 
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x44,         //   *   * 
    0x38,         //    ***  
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 100
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0xB8, 0x00,         //    *** *        
    0xC4, 0x00,         //   *   **        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0xC4, 0x00,         //   *   **        
    0xB8, 0x00,         //    *** *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 101
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0xFE, 0x00,         //  *******        
    0x02, 0x00,         //  *              
    0x82, 0x00,         //  *     *        
    0x44, 0x00,         //   *   *         
    0x38, 0x00,         //    ***          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 102
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x02,         //  *      
    0x02,         //  *      
    0x0F,         // ****    
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 103
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xB8, 0x00,         //    *** *        
    0xC4, 0x00,         //   *   **        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0xC4, 0x00,         //   *   **        
    0xB8, 0x00,         //    *** *        
    0x80, 0x00,         //        *        
    0x42, 0x00,         //  *    *         
    0x3C, 0x00,         //   ****          
    0x00, 0x00,         //                 

/***********************************
 * Character - 104
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x3A,         //  * ***  
    0x46,         //  **   * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 105
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 106
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x03,         // **      
    0x00,         //         

/***********************************
 * Character - 107
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x82,         //  *     *
    0x42,         //  *    * 
    0x22,         //  *   *  
    0x12,         //  *  *   
    0x1A,         //  * **   
    0x26,         //  **  *  
    0x22,         //  *   *  
    0x42,         //  *    * 
    0x82,         //  *     *
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 108
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 109
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x3A, 0x07,         //  * ***  ***     
    0xC6, 0x08,         //  **   **   *    
    0x42, 0x08,         //  *    *    *    
    0x42, 0x08,         //  *    *    *    
    0x42, 0x08,         //  *    *    *    
    0x42, 0x08,         //  *    *    *    
    0x42, 0x08,         //  *    *    *    
    0x42, 0x08,         //  *    *    *    
    0x42, 0x08,         //  *    *    *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 110
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3A,         //  * ***  
    0x46,         //  **   * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 111
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x38, 0x00,         //    ***          
    0x44, 0x00,         //   *   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x44, 0x00,         //   *   *         
    0x38, 0x00,         //    ***          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 112
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x3A, 0x00,         //  * ***          
    0x46, 0x00,         //  **   *         
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x46, 0x00,         //  **   *         
    0x3A, 0x00,         //  * ***          
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x00, 0x00,         //                 

/***********************************
 * Character - 113
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xB8, 0x00,         //    *** *        
    0xC4, 0x00,         //   *   **        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0x82, 0x00,         //  *     *        
    0xC4, 0x00,         //   *   **        
    0xB8, 0x00,         //    *** *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 

/***********************************
 * Character - 114
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1A,         //  * **   
    0x06,         //  **     
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 115
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3C,         //   ****  
    0x42,         //  *    * 
    0x02,         //  *      
    0x02,         //  *      
    0x3C,         //   ****  
    0x40,         //       * 
    0x40,         //       * 
    0x42,         //  *    * 
    0x3C,         //   ****  
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 116
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x0F,         // ****    
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 117
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x62,         //  *   ** 
    0x5C,         //   *** * 
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 118
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x41,         // *     * 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 119
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x21, 0x04,         // *    *    *     
    0x21, 0x04,         // *    *    *     
    0x52, 0x02,         //  *  * *  *      
    0x52, 0x02,         //  *  * *  *      
    0x8A, 0x02,         //  * *   * *      
    0x8A, 0x02,         //  * *   * *      
    0x8A, 0x02,         //  * *   * *      
    0x04, 0x01,         //   *     *       
    0x04, 0x01,         //   *     *       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 120
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x41,         // *     * 
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x14,         //   * *   
    0x14,         //   * *   
    0x22,         //  *   *  
    0x41,         // *     * 
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 121
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x41,         // *     * 
    0x41,         // *     * 
    0x21,         // *    *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x06,         //  **     
    0x00,         //         

/***********************************
 * Character - 122
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x20,         //      *  
    0x10,         //     *   
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x04,         //   *     
    0x02,         //  *      
    0x7F,         // ******* 
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 123
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x18,         //    **   
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x03,         // **      
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x18,         //    **   
    0x00,         //         

/***********************************
 * Character - 124
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         

/***********************************
 * Character - 125
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x18,         //    **   
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x03,         // **      
    0x00,         //         

/***********************************
 * Character - 126
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x8E, 0x00,         //  ***   *        
    0x71, 0x00,         // *   ***         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

};

