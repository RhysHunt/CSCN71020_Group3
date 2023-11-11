#include "Rectangle.h"
#include <stdio.h>
#include <math.h>

double CalculateSideLength1(POINTS* points) {
	double x1, x2, y1, y2;
	x1 = points[0].x;
	x2 = points[1].x;
	y1 = points[0].y;
	y2 = points[1].y;
	double distance1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	return distance1;
}
double CalculateSideLength2(POINTS* points) {
	double x1, x2, y1, y2;
	x1 = points[1].x;
	x2 = points[2].x;
	y1 = points[1].y;
	y2 = points[2].y;
	double distance2 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	return distance2;
}

void PrintRectanglePerimeter(POINTS* points) {
	double distance1 = CalculateSideLength1(points);
	double distance2 = CalculateSideLength2(points);

	double perimeter = (distance1 + distance2) * 2;

	printf("\nThe perimeter of the given rectangle is: %lf", perimeter);
}

void PrintAreaOfRectangle(POINTS* points) {
	double distance1 = CalculateSideLength1(points);
	double distance2 = CalculateSideLength2(points);

	double area = distance1 * distance2;

	printf("\nThe Area of the given rectangle is: %lf", area);
}