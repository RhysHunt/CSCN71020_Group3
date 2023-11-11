#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "triangleSolver.h"

#include "triangleAngleSolver.h"

void SolveAngles(double side1, double side2, double side3) {
	
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		printf("Not a triangle");
	}
	else if (side1 == side2 && side1 == side3) {
		printf("Equilateral triangle. All angles are: 60 degrees");
	}
	else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2)) // not checking for if side 3 adn 2 are the same
	{
		CalculateAngles(side1, side2, side3, "Isosceles");
	}
	else {
		CalculateAngles(side1, side2, side3, "Scalene");

	}
}

void CalculateAngles(double side1, double side2, double side3, char* NameOfTriangle) {

	double angle1 = acos(((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3)));
	angle1 = (angle1 * (180 / 3.141592653589793238462643383));
	double angle2 = acos(((side1 * side1) + (side2 * side2) - (side3 * side3)) / (2 * side1 * side2));
	angle2 = (angle2 * (180 / 3.141592653589793238462643383));
	double angle3 = acos(((side1 * side1) + (side3 * side3) - (side2 * side2)) / (2 * side1 * side3));
	angle3 = (angle3 * (180 / 3.141592653589793238462643383));

	printf("%s triangle. The angles are: %lf, %lf, %lf, \n", NameOfTriangle, angle1, angle2, angle3);
}