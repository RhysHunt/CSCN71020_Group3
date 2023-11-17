// Aiden - Rhys - Ben -- GROUP 3 -- 

#include "PrintStatements.h"

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
	if (scanf_s("%1o", &shapeChoice) != 1) {
		printf("not a vaild input\n");
		exit(1);
	}
	return shapeChoice;
}

