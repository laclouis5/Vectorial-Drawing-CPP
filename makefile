C = g++ -std=c++11
FLAGS = -W -Wall
EXE = vectDraw

all: $(EXE)

vectDraw: CPixel.o CLigne.o CImage.o CBitmap.o main.o
	$(C) -o $@ $^

CBitmap.o: Format/CBitmap.cpp Format/CBitmap.h Image/CImage.h
	$(C) -o CBitmap.o -cpp Format/CBitmap.cpp $(FLAGS)

CImage.o: Image/CImage.cpp Image/CImage.h Image/CLigne.h
	$(C) -o CImage.o -cpp Image/CImage.cpp $(FLAGS)

CLigne.o: Image/CLigne.cpp Image/CLigne.h Image/CPixel.h
	$(C) -o CLigne.o -cpp Image/CLigne.cpp $(FLAGS)

CPixel.o: Image/CPixel.cpp Image/CPixel.h
	$(C) -o CPixel.o -cpp Image/CPixel.cpp $(FLAGS)

main.o: main.c Format/CBitmap.h
	$(C) -o main.o -cpp main.cpp $(FLAGS)

.PHONY: clean mrproper

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXE)