/*
 *  CPixel.cpp
 *  P_Bitmap
 *
 *  Created by Le Gal on 24/10/06.
 *  Copyright 2006 __MyCompanyName__. All rights reserved.
 *
 */

#include "CPoint.h"

CPoint::CPoint() {
    X = 0;
    Y = 0;
    couleur = [0, 0, 0];
}

CPoint::CPoint(int _X, int _Y, int *_couleur, int _transp) {
    X = _X;
    Y = _Y;
    couleur = _couleur;
    transparence(_transp);
}

CPoint::transparence(int _transp) {
    
}


