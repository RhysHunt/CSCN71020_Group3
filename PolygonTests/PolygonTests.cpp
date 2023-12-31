#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
#include "../PolygonChecker/Rectangle.h"
#include "../PolygonChecker/Triangle.h"
}

namespace PolygonTests
{
	TEST_CLASS(TriangleAngleTests)
	{
	public:
		//Functional tests
		TEST_METHOD(TriangleAngles_ft1)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 9, side2 = 9, side3 = 9;
			actual = CalculateAngles(side1, side2, side3, "Equilateral");
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_ft2)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 6, side2 = 10, side3 = 10;
			actual = CalculateAngles(side1, side2, side3, "Icoselese");
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_ft3)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 1, side2 = 1, side3 = 1;
			actual = CalculateAngles(side1, side2, side3, "Equilateral");
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_ft4)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 900, side2 = 700, side3 = 500;
			actual = CalculateAngles(side1, side2, side3, "Scalene");
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_ft5)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 13, side2 = 14, side3 = 9;
			actual = CalculateAngles(side1, side2, side3, "Scalene");
			Assert::AreEqual(expected, actual);
		}
		//Exception tests
		TEST_METHOD(TriangleAngles_et1)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = -5, side2 = 4, side3 = 3;
			actual = CalculateAngles(side1, side2, side3, "Scalene");
			Assert::AreNotEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_et2)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 10, side2 = -4, side3 = 5;
			actual = CalculateAngles(side1, side2, side3, "Scalene");
			Assert::AreNotEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_et3)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 8, side2 = 7, side3 = -3;
			actual = CalculateAngles(side1, side2, side3, "Scalene");
			Assert::AreNotEqual(expected, actual);

		}
		TEST_METHOD(TriangleAngles_et4)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 3, side2 = -3, side3 = -3;
			actual = CalculateAngles(side1, side2, side3, "Equalateral");
			Assert::AreNotEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_et5)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = -5, side2 = -5, side3 = 3;
			actual = CalculateAngles(side1, side2, side3, "Scalene");
			Assert::AreNotEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_et6)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 0, side2 = 5, side3 = 5;
			actual = CalculateAngles(side1, side2, side3, "Icoselese");
			Assert::AreNotEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_et7)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 0, side2 = 0, side3 = 0;
			actual = CalculateAngles(side1, side2, side3, "Icoselese");
			Assert::AreNotEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_et8)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 6000000000000000000, side2 = 500000000000000000, side3 = 5000000000000000000;
			actual = CalculateAngles(side1, side2, side3, "Icoselese");
			Assert::AreNotEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_et9)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 0, side2 = 60, side3 = 60;
			actual = CalculateAngles(side1, side2, side3, "Icoselese");
			Assert::AreNotEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_et10)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 5, side2 = 0, side3 = 5;
			actual = CalculateAngles(side1, side2, side3, "Icoselese");
			Assert::AreNotEqual(expected, actual);
		}
		//Boundary tests
		TEST_METHOD(TriangleAngles_bt1)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 0.001, side2 = 0.001, side3 = 0.001;
			actual = CalculateAngles(side1, side2, side3, "Equilateral");
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_bt2)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 0.001, side2 = -0.001, side3 = 0.001;
			actual = CalculateAngles(side1, side2, side3, "Icoselese");
			Assert::AreNotEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_bt3)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 5, side2 = 4, side3 = -0.001;
			actual = CalculateAngles(side1, side2, side3, "Scalene");
			Assert::AreNotEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_bt4)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 1000000, side2 = 2000000, side3 = 3000000;
			actual = CalculateAngles(side1, side2, side3, "Scalene");
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_bt5)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 2, side2 = 0.001, side3 = 2;
			actual = CalculateAngles(side1, side2, side3, "Scalene");
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TriangleAngles_bt6)
		{
			double side1, side2, side3;
			float actual, expected;
			expected = 180, side1 = 2, side2 = 2, side3 = 0.001;
			actual = CalculateAngles(side1, side2, side3, "Scalene");
			Assert::AreEqual(expected, actual);
		}
	};
	TEST_CLASS(TypeOfTriangle)
	{
	public:
		TEST_METHOD(functional_equilateral)
		{
			char* expected = "equilateral";

			char* actual = SolveAngles(2, 2, 2);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(functional_scalene)
		{
			char* expected = "scalene";

			char* actual = SolveAngles(5, 4, 2);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(functional_isosceles_test1)
		{
			char* expected = "isosceles";

			// side 3 different side
			char* actual = SolveAngles(2, 2, 1);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(functional_isosceles_test2)
		{
			char* expected = "isosceles";

			// side 1 different side
			char* actual = SolveAngles(1, 2, 2);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(functional_isosceles_test3)
		{
			char* expected = "isosceles";

			// side 2 different side
			char* actual = SolveAngles(2, 1, 2);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftrianle_test1)
		{
			char* expected = "not a triangle";

			char* actual = SolveAngles(0, 0, 0);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftriangle_test2)
		{
			char* expected = "not a triangle";

			// check 3 input if its good
			char* actual = SolveAngles(5, 4, 0);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftriangle_test3)
		{
			char* expected = "not a triangle";

			// check 2 input if its good
			char* actual = SolveAngles(5, 0, 4);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftriangle_test4)
		{
			char* expected = "not a triangle";

			// check 1 input if its good
			char* actual = SolveAngles(0, 4, 5);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftriangle_test5)
		{
			char* expected = "not a triangle";

			// first side is too big
			char* actual = SolveAngles(100, 5, 5);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftriangle_test6)
		{
			char* expected = "not a triangle";

			// second side is too big
			char* actual = SolveAngles(5, 100, 5);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftriangle_test7)
		{
			char* expected = "not a triangle";

			// last side is too big
			char* actual = SolveAngles(5, 5, 100);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftriangle_test8)
		{
			char* expected = "not a triangle";

			// first side is neagtive
			char* actual = SolveAngles(-1, 2, 3);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftriangle_test9)
		{
			char* expected = "not a triangle";

			// second side is negative 
			char* actual = SolveAngles(1, -2, 3);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftriangle_test10)
		{
			char* expected = "not a triangle";

			// last side is negative
			char* actual = SolveAngles(1, 2, -3);

			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(notanytypeoftriangle_test11)
		{
			char* expected = "not a triangle";

			// all negative numbers
			char* actual = SolveAngles(-1, -2, -3);

			Assert::AreEqual(actual, expected);
		}

	};

	TEST_CLASS(PointsTest)
	{
	public:

		TEST_METHOD(Side1_OfRectangle_IsCorrect)
		{

			float expected = 6.32455532034;
			POINTS points[4];
			points[0].x = -3;
			points[0].y = 5;
			points[1].x = 3;
			points[1].y = 7;
			float width = CalculateSideLength1(points);

			Assert::AreEqual(expected, width);

		}

		TEST_METHOD(Side2_OfRectangle_IsCorrect)
		{

			float expected = 9.48683298051;
			POINTS points[4];
			points[1].x = 3;
			points[1].y = 7;
			points[2].x = 6;
			points[2].y = -2;
			float length = CalculateSideLength2(points);

			Assert::AreEqual(expected, length);
		}


		TEST_METHOD(Perimeter_OfRectangle_IsCorrect)
		{

			float expected = 31.6227766017;
			POINTS points[4];
			points[0].x = -3;
			points[0].y = 5;
			points[1].x = 3;
			points[1].y = 7;
			points[2].x = 6;
			points[2].y = -2;
			points[3].x = 0;
			points[3].y = -4;
			float perimeter = PrintRectanglePerimeter(points);

			Assert::AreEqual(expected, perimeter);
		}

		TEST_METHOD(Area_OfRectangle_IsCorrect)
		{

			float expected = 60;
			POINTS points[4];
			points[0].x = -3;
			points[0].y = 5;
			points[1].x = 3;
			points[1].y = 7;
			points[2].x = 6;
			points[2].y = -2;
			points[3].x = 0;
			points[3].y = -4;
			float area = PrintAreaOfRectangle(points);

			Assert::AreEqual(expected, area);
		}

		TEST_METHOD(Points_AreValid_ForRectangle)
		{

			bool expected = true;
			POINTS points[4];
			points[0].x = -3;
			points[0].y = 5;
			points[1].x = 3;
			points[1].y = 7;
			points[2].x = 6;
			points[2].y = -2;
			points[3].x = 0;
			points[3].y = -4;
			bool real = CheckIfRectngle(points);

			Assert::AreEqual(expected, real);
		}

		TEST_METHOD(Points_AreNotValid_ForRectangle)
		{

			bool expected = false;
			POINTS points[4];
			points[0].x = -2;
			points[0].y = 5;
			points[1].x = 3;
			points[1].y = 0;
			points[2].x = 6;
			points[2].y = -2;
			points[3].x = 0;
			points[3].y = -5;
			bool real = CheckIfRectngle(points);

			Assert::AreEqual(expected, real);
		}

		TEST_METHOD(Points_AreNotValid_WhenParallelogram)
		{

			bool expected = false;
			POINTS points[4];
			points[0].x = -1;
			points[0].y = 5;
			points[1].x = 2;
			points[1].y = 8;
			points[2].x = 4;
			points[2].y = 4;
			points[3].x = 1;
			points[3].y = 1;
			bool real = CheckIfRectngle(points);

			Assert::AreEqual(expected, real);
		}
		TEST_METHOD(side1_OfRectangle_IsCorrect_WhenZero)
		{

			float expected = 0;
			POINTS points[4];
			points[0].x = 0;
			points[0].y = 0;
			points[1].x = 0;
			points[1].y = 0;
			float width = CalculateSideLength1(points);

			Assert::AreEqual(expected, width);

		}

		TEST_METHOD(side1_OfRectangle_IsCorrect_When0)
		{

			float expected = 0;
			POINTS points[4];
			points[1].x = 0;
			points[1].y = 0;
			points[2].x = 0;
			points[2].y = 0;
			float length = CalculateSideLength2(points);

			Assert::AreEqual(expected, length);
		}

	};
}
