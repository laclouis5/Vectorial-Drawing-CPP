#include "FPoint.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

#include "CPoint.h"
#include "CPixel.h"
#include "CImage.h"

void TracerPoint (CPoint *point, CImage   *img){

    CPixel *pixel = img->getPixel(point->X,point->Y);
    pixel->RGB(point->couleur[0],point->couleur[1],point->couleur[2]);

}
