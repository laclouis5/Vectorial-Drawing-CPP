#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

#include <fstream>
#include <sstream>
#include <algorithm>

#include "cbitmap.h"
#include "cpoint.h"
#include "cimage.h"
#include "fligne.h"
#include "fpoint.h"

#define NB_SHAPE (8)

using namespace std;

string lineIn;
string lineOut;

int nb_lines = 0;

enum color {
    ROUGE,
    VERT,
    BLEU,
    JAUNE,
    CYAN,
    MAJENTA,
    ORANGE,
    VIOLET,
    ROSE,
    BLANC
};

enum shape {
    POINT,
    LIGNE,
    RECTANGLE,
    CARRE,
    CERCLE,
    RECTANGLES,
    CARRES,
    CERCLES,
};

string listShape[NB_SHAPE] = {"POINT", "LIGNE", "RECTANGLE", "CARRE", "CERCLE", "RECTANGLES", "CARRES", "CERCLES"};

struct charToDelete {
    bool operator()(char ch) {
        return ch == ',' || ch == ':';
    }
};

struct color {
    ROUGE[3] = {255, 0  , 0};
    VERT[3]  = {0  , 255, 0};
    BLEU[3]  = {0  , 0  , 255};

    JAUNE[3]   = {255, 255, 0};
    CYAN[3]    = {0  , 255, 255};
    MAJENTA[3] = {255, 0  , 255};

    ORANGE[3] = {237, 127, 16};
    VIOLET[3] = {102, 0  , 153};
    ROSE[3]   = {253, 108, 158};
    BLANC[3]  = {255, 255, 255};
};

string getString (

ifstream infile("fichier_initial.txt");
                  
while (getline(infile, lineIn))
{
    // on enlève le caractère ","
    remove_copy_if(lineIn.begin(), lineIn.end(), std::back_inserter(lineOut), charToDelete());
    
    // traitement sur lineOut
    
    // extraction de la forme
    string SHAPE;
    for (int i = 0; lineOut[i] != ' '; i++)
    {
        SHAPE[i] = lineOut[i];
    }
    
    if (strcmp(SHAPE, "POINT")) {
        string POS_X =
        X = stoi(
    }

    nb_lines++;
}
    

