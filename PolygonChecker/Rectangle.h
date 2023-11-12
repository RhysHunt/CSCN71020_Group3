#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

typedef struct points {
	int x;
	int y;
}POINTS;

void getRectSides(POINTS(points[]));

double CalculateSideLength1(POINTS* points);
double CalculateSideLength2(POINTS* points);
double CalculateSideLength3(POINTS* points);
double CalculateSideLength4(POINTS* points);

void PrintRectanglePerimeter(POINTS* points);
void PrintAreaOfRectangle(POINTS* points);

void CheckIfRectngle(POINTS* points);
void PutPointsInOrder(POINTS* points);