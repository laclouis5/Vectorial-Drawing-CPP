#include "CSegment.h"

CSegment::CSegment()
{
 X1 = 0;
 Y1 = 0;
 X2 = 0;
 Y2 = 0;

 couleur[0] = 0;
 couleur[1] = 0;
 couleur[2] = 0;

 transp = 0;
}

CSegment::CSegment(int _X1, int _Y1, int _X2, int _Y2){
    X1 = _X1;
    Y1 = _Y1;
    X2 = _X2;
    Y2 = _Y2;

    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;

    transp = 0;
}

CSegment::CSegment(int _X1, int _Y1, int _X2, int _Y2, int _couleur[3]){
    X1 = _X1;
    Y1 = _Y1;
    X2 = _X2;
    Y2 = _Y2;

    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];

    transp = 0;
}

CSegment::CSegment(int _X1, int _Y1, int _X2, int _Y2, int _couleur[3], int _transp){
    X1 = _X1;
    Y1 = _Y1;
    X2 = _X2;
    Y2 = _Y2;

    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];

    transp = _transp;
}
