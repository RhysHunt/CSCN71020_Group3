// Aiden - Rhys - Ben -- GROUP 3 -- 

#include "Rectangle.h"

#define MAXSIZE		4

double CalculateSideLength1(POINTS* points) {
	double x1, x2, y1, y2;
	x1 = points[0].x;
	x2 = points[1].x;
	y1 = points[0].y;
	y2 = points[1].y;
	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	return distance;
}
double CalculateSideLength2(POINTS* points) {
	double x1, x2, y1, y2;
	x1 = points[1].x;
	x2 = points[2].x;
	y1 = points[1].y;
	y2 = points[2].y;
	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	return distance;
}
double CalculateSideLength3(POINTS* points) {
	double x1, x2, y1, y2;
	x1 = points[2].x;
	x2 = points[3].x;
	y1 = points[2].y;
	y2 = points[3].y;
	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	return distance;
}
double CalculateSideLength4(POINTS* points) {
	double x1, x2, y1, y2;
	x1 = points[3].x;
	x2 = points[0].x;
	y1 = points[3].y;
	y2 = points[0].y;
	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	return distance;
}

void PutPointsInOrder(POINTS* points) {
	double x1 = points[0].x;
	double x2 = points[1].x;
	double x3 = points[2].x;
	double x4 = points[3].x;

	for (int i = 0; i < MAXSIZE - 1; i++) {
		for (int j = i + 1; j < MAXSIZE; j++) {
			if (points[i].x > points[j].x) {
				POINTS temp = points[i];
				points[i] = points[j];
				points[j] = temp;
			}
		}
	}
	if (points[2].y > points[3].y) {
		POINTS temp = points[2];
		points[2] = points[3];
		points[3] = temp;
	}
	if (points[0].y < points[1].y) {
		POINTS temp = points[0];
		points[0] = points[1];
		points[1] = temp;
	}
}

void CheckIfRectngle(POINTS* points) {
	double distance1 = CalculateSideLength1(points);
	double distance2 = CalculateSideLength2(points);
	double distance3 = CalculateSideLength3(points);
	double distance4 = CalculateSideLength4(points);

	//printf("%lf, %lf, %lf, %lf", distance1, distance2, distance3, distance4);

	if (distance1 == distance3 && distance2 == distance4) {
		printf("is rectangle\n");
	}
	else {
		printf("not a rectangle\n");
		exit(1);
	}
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

void getRectSides(POINTS points[]) {
	printf_s("Enter the x and y of the rectangle: \n");
	for (int i = 0; i < 4; i++) {
		printf_s("x variable %d: ", (i + 1));
		int vaildinput1 = scanf_s("%d", &points[i].x);
		printf_s("y variable %d: ", (i + 1));
		int vaildinput2 = scanf_s("%d", &points[i].y);
		printf("\npoint %d is (%d, %d)\n", i + 1, points[i].x, points[i].y);
		printf("--------------------------\n");
		if (vaildinput1 + vaildinput2 != 2) {
			printf("not a vaild input\n");
			exit(1);
		}
	}
}