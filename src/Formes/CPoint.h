// CPoint.h

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class CPoint{
private:
	int X;
	int Y;
    int couleur[3];
	
public:
	CPoint(int _X, int _Y, int *_couleur, int _transp);
	CPoint();
    
    ~CPoint();
	
    void Transparence(int _transp);
    
};
