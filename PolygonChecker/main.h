#pragma once
#include <stdio.h>
void printWelcome();
int printShapeMenu();
double* getTriangleSides(double* triangleSides);


typedef struct points {
	int x;
	int y;
}POINTS;

void getRectSides(POINTS(points[]));