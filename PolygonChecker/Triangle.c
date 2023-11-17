// Aiden - Rhys - Ben -- GROUP 3 -- 

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "Triangle.h"

void SolveAngles(double side1, double side2, double side3) {
	
	bool realtriangle = FindIfInputMakesTrignale(side1, side2, side3);

	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		printf("Not a triangle");
	}
	else if (realtriangle == false) {
		printf("Not a triangle");
	}
	else if (side1 == side2 && side1 == side3) {
		printf("Equilateral triangle. All angles are: 60 degrees");
	}
	else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1)) {
		CalculateAngles(side1, side2, side3, "Isosceles");
	}
	else {
		CalculateAngles(side1, side2, side3, "Scalene");
	}
}
double* getTriangleSides(double* triangleSides) {
	printf_s("Enter the three sides of the triangle (Example: '3 3 3'): ");
	for (int i = 0; i < 3; i++) {
		if (scanf_s("%lf", &triangleSides[i]) != 1) {
			printf("not a vaild input\n");
			exit(1);
		}
	}
	return triangleSides;
}

bool FindIfInputMakesTrignale(double side1, double side2, double side3) {
	int count = 0;

	if (side1 + side2 > side3)
		count++;	
	if (side2 + side3 > side1)
		count++;	
	if (side1 + side3 > side2)
		count++;
	
	if (count != 3)
		return false;

	return true;
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