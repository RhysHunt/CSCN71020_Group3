// Aiden - Rhys - Ben -- GROUP 3 -- 

#include "PrintStatements.h"
#include "Triangle.h"
#include "Rectangle.h"

int side = 0;

int main() {
	bool continueProgram = true;
	
	while (continueProgram) {

		printWelcome();

		int shapeChoice = printShapeMenu();

		POINTS points[4] = { 0 };

		switch (shapeChoice)
		{
		case 0:
			continueProgram = false;
			break;
		case 1:
			printf_s("Triangle selected.\n");

			double triangleSides[3] = { 0, 0, 0 };
			double* triangleSidesPtr = getTriangleSides(triangleSides);

			SolveAngles(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);

			break;
		case 2:
			printf_s("Rectangle elected.\n");

			getRectSides(points);
			PutPointsInOrder(points);
			CheckIfRectngle(points);
			PrintRectanglePerimeter(points);
			PrintAreaOfRectangle(points);

			break;
		default:
			printf_s("Invalid value entered.\n");

			break;
		}
	}
	return 0;
}