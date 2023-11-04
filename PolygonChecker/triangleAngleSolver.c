#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "triangleSolver.h"

#include "triangleAngleSolver.h"

char* SolveAngles(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = ("Equilateral triangle. all angles are: 60 degrees");
	}
	else if ((side1 == side2 && side1 != side3) ||
		(side1 == side3 && side1 != side2))
	{
		result = ("Isosceles triangle. The angles are: %lf, %d, %d, ", acos((side1*side1) + (side2*side2) - (side3*side3) / (2*side1*side2)), 0, 0);
		printf(result);
	}
	else {
		result = "Scalene triangle";
	}

	return result;
}