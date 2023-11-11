#include <stdio.h>
#include <stdbool.h>

#include "main.h"
#include "triangleSolver.h"
#include "triangleAngleSolver.h"


int side = 0;

int main() {
	bool continueProgram = true;
	
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();
		int X;
		int Y;
		POINTS points[4] = { 0 };
		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			double triangleSides[3] = { 0, 0, 0 };
			double* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			SolveAngles(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			//printf_s("%s\n", result);
			break;
		case 2:
			printf_s("Rectangle elected.\n");
			getRectSides(&points);
		case 0:
			continueProgram = false;
			break;
		
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("2. Rectangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

double* getTriangleSides(double* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%lf", &triangleSides[i]);
	}
	return triangleSides;
}

void getRectSides(POINTS points[]) {
	printf_s("Enter the x and y of the rectangle: ");
	for (int i = 0; i < 4; i++) {
		printf_s("x variable: ");
		scanf_s("%d", &points[i].x);
		printf_s("y variable: ");
		scanf_s("%d", &points[i].y);
	}
}