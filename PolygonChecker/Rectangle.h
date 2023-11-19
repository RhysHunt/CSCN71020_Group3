#pragma once

// Aiden - Rhys - Ben -- GROUP 3 -- 

#include <stdio.h>
#include <stdlib.h>
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
double CalculateCrossLength(POINTS* points);
float FindAngle(POINTS points, double distance1, double distance2, double distance5);

double PrintRectanglePerimeter(POINTS* points);
double PrintAreaOfRectangle(POINTS* points);

bool CheckIfRectngle(POINTS* points);
void PutPointsInOrder(POINTS* points);