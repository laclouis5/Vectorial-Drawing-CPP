#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct listColors {
    int ROUGE[3] = {255, 0  , 0};
    int VERT[3]  = {0  , 255, 0};
    int BLEU[3]  = {0  , 0  , 255};
    
    int JAUNE[3]   = {255, 255, 0};
    int CYAN[3]    = {0  , 255, 255};
    int MAJENTA[3] = {255, 0  , 255};
    
    int ORANGE[3] = {237, 127, 16};
    int VIOLET[3] = {102, 0  , 153};
    int ROSE[3]   = {253, 108, 158};
    int BLANC[3]  = {255, 255, 255};
};


void getColor(string COULEUR, int *color, struct listColors *listColors)
{
    if(strcmp(COULEUR, "ROUGE"))
    {
        *color = listColors->ROUGE;
    }
    if(strcmp(COULEUR, "VERT"))
    {
        *color = listColors->VERT;
    }
    if(strcmp(COULEUR, "BLEU"))
    {
        *color = listColors->BLEU;
    }
    if(strcmp(COULEUR, "JAUNE"))
    {
        *color = listColors->JAUNE;
    }
    if(strcmp(COULEUR, "CYAN"))
    {
        *color = listColors->CYAN;
    }
    if(strcmp(COULEUR, "MAJENTA"))
    {
        *color = listColors->MAJENTA;
    }
    if(strcmp(COULEUR, "ORANGE"))
    {
        *color = listColors->ORANGE;
    }
    if(strcmp(COULEUR, "VIOLET"))
    {
        *color = listColors->VIOLET;
    }
    if(strcmp(COULEUR, "ROSE"))
    {
        *color = listColors->ROSE;
    }
    if(strcmp(COULEUR, "BLANC"))
    {
        *color = listColors->BLANC;
    }
}

int main ()
{
    ifstream fileIn("fichier_initial", ios::in);
    
    if(fileIn)
    {
        
        while(fileIn.eof())
        {
            string shape;
            fileIn >> shape;
            
            if(strcmp(shape, "POINT"))
            {
                int X, Y;
                int TRANSP;
                string COULEUR;
                
                fileIn >> X >> Y >> COULEUR >> TRANSP;

                int couleur[3];
                getColor(COULEUR, couleur, &listColors);
            }
            
            if(strcmp(shape, "LIGNE"))
            {
                int X1, X2, Y1, Y2, TRANSP;
                string COULEUR;
                
                fileIn >> X1 >> Y1 >> X2 >> Y2 >> COULEUR >> TRANSP;

                int couleur[3];
                getColor(COULEUR, couleur, &listColors);
            }
            
            if(strcmp(shape, "RECTANGLE"))
            {
                int X, Y, LONGUEUR, HAUTEUR, TRANSP;
                string COULEUR;
                
                fileIn >> X >> Y >> LONGUEUR >> HAUTEUR >> COULEUR >> TRANSP;
                
                int couleur[3];
                getColor(COULEUR, couleur, &listColors);
            }
            
            if(strcmp(shape, "CARRE"))
            {
                int X, Y, LONGUEUR, TRANSP;
                string COULEUR;
                
                fileIn >> X >> Y >> LONGUEUR >> COULEUR >> TRANSP;
                
                int couleur[3];
                getColor(COULEUR, couleur, &listColors);
            }
            
            if(strcmp(shape, "CERCLE"))
            {
                int X, Y, RAYON, TRANSP;
                string COULEUR;
                
                fileIn >> X >> Y >> RAYON >> COULEUR >> TRANSP;
                
                int couleur[3];
                getColor(COULEUR, couleur, &listColors);
            }
            
            if(strcmp(shape, "RECTANGLES"))
            {
                int X, Y, LONGUEUR, HAUTEUR, TRANSP;
                string COULEUR;
                
                fileIn >> X >> Y >> LONGUEUR >> HAUTEUR >> COULEUR >> TRANSP;
                
                int couleur[3];
                getColor(COULEUR, couleur, &listColors);
            }
            
            if(strcmp(shape, "CARRES"))
            {
                int X, Y, LONGUEUR, TRANSP;
                string COULEUR;
                
                fileIn >> X >> Y >> LONGUEUR >> COULEUR >> TRANSP;
                
                int couleur[3];
                getColor(COULEUR, couleur, &listColors);
            }
            
            if(strcmp(shape, "CERCLES"))
            {
                int X, Y, RAYON, TRANSP;
                string COULEUR;
                
                fileIn >> X >> Y >> RAYON >> COULEUR >> TRANSP;
                
                int couleur[3];
                getColor(COULEUR, couleur, &listColors);
            }
        }
        
        fileIn.close();
    }
    
    else
        cerr << "Impossible d'ouvrir le fichier." << endl;
    
    return 0;
}
