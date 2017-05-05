#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

#include "cbitmap.h"
#include "cpoint.h"
#include "cimage.h"
#include "fligne.h"
#include "fpoint.h"

using namespace std;


int main(int argc, char * argv[]) {
    cout << "(II) P_Bitmap exection start (" << __DATE__ << " - " << __TIME__ << ")" << endl;
    cout << "(II) + Number of arguments = " << argc << endl;
    
    cout << "(II) CBitmap object creation" << endl;
    CBitmap *image = new CBitmap();
    string filename2 = "Sortie.bmp";
    
    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(200, 200); // création d'une image noire
    
    
    //création d'un point rouge
    int couleur[3];
    couleur[ 0 ] = 255;
    couleur[ 1 ] = 0;
    couleur[ 2 ] = 0;
    CPoint *point = new CPoint(10, 10, couleur);
    TracerPoint(point, img);
    
    //création ligne verte -Algorithme Bresenham
    int couleur_ligne[3];
    couleur_ligne[ 0 ] = 0;
    couleur_ligne[ 1 ] = 255;
    couleur_ligne[ 2 ] = 255;
    CSegment *segment = new CSegment(199, 3, 100, 100, couleur_ligne);
    TracerLigne(segment, img);
    
    
    image->setImage( img );
    cout << "(II) CBitmap image saving" << endl;
    image->SaveBMP(filename2);
    
    return 1;
}
