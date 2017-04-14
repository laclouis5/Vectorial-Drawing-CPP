#ifndef CSEGMENT_H
#define CSEGMENT_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

class CSegment
{
public:
    int X1, Y1, X2, Y2, couleur[3], transp;

public:
    CSegment();
    CSegment(int _X1, int _Y1, int _X2, int _Y2);
    CSegment(int _X1, int _Y1, int _X2, int _Y2, int _couleur[3]);
    CSegment(int _X1, int _Y1, int _X2, int _Y2, int _couleur[3], int _transp);
};

#endif // CSEGMENT_H
