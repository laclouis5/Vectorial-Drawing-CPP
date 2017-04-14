#include "fpoint.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

#include "cpoint.h"
#include "cpixel.h"
#include "cimage.h"

void TracerPoint (CPoint *point, CImage   *img){

    CPixel *pixel = img->getPixel(point->X,point->Y);
    pixel->RGB(point->couleur[0],point->couleur[1],point->couleur[2]);

}
