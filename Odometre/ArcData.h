/* 
 * File:   ArcData.h
 * Author: bedm2308
 *
 * Created on 15 octobre 2012, 21:28
 */

#ifndef ARCDATA_H
#define	ARCDATA_H

#define ARC_ANGLE_SPAN 270

#define ARC_MAX_LINES 5

typedef struct {
    unsigned short PosX;
    unsigned char PosY;
    unsigned char Len;
} LineData;

extern unsigned char ArcDataSize[ARC_ANGLE_SPAN];

extern LineData ArcData[ARC_ANGLE_SPAN][ARC_MAX_LINES];


#endif	/* ARCDATA_H */

