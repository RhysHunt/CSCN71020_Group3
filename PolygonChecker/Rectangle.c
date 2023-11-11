#include "Rectangle.h"
#include <stdio.h>
#include <math.h>

void PrintRectanglePerimeter(POINTS* points) {
	double perimeter;
		double x1, x2, y1, y2;
		x1 = points[0].x;
		x2 = points[0 + 1].x;
		y1 = points[0].y;
		y2 = points[0 + 1].y;
		double distance1 = sqrt(pow(x2-x1, 2) + pow(y2 - y1, 2));
		x1 = points[1].x;
		x2 = points[2].x;
		y1 = points[1].y;
		y2 = points[2].y;
		double distance2 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		perimeter = 2*(distance1 + distance2);
		printf("The perimeter of the given rectangle is: %lf", perimeter);
}