/* 
 * File:   ArcData.h
 * Author: bedm2308
 *
 * Created on 15 octobre 2012, 21:28
 */

#ifndef ARCDATA_H
#define	ARCDATA_H

#define ARC_ANGLE_SPAN 120

#define ARC_MAX_LINES 29

typedef struct {
    unsigned short PosX;
    unsigned short PosY;
    unsigned short Len;
} LineData;

extern unsigned char ArcDataSize[ARC_ANGLE_SPAN];

extern LineData ArcData[ARC_ANGLE_SPAN][ARC_MAX_LINES];


#endif	/* ARCDATA_H */

