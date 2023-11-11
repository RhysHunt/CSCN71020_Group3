#pragma once

typedef struct points {
	int x;
	int y;
}POINTS;

void getRectSides(POINTS(points[]));

double CalculateSideLength1(POINTS* points);
double CalculateSideLength2(POINTS* points);

void PrintRectanglePerimeter(POINTS* points);
void PrintAreaOfRectangle(POINTS* points);