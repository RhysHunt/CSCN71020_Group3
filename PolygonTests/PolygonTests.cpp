#include "pch.h"
#include "CppUnitTest.h"
#include <stdbool.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
#include "../PolygonChecker/Rectangle.h"
}

namespace PolygonTests
{
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
			points[1].x = 0;
			points[1].y = -4;
			points[2].x = 3;
			points[2].y = 7;
			points[3].x = 6;
			points[3].y = -2;
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
		TEST_METHOD(Width_OfRectangle_IsCorrect_WhenZero)
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

		TEST_METHOD(Length_OfRectangle_IsCorrect_When0)
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

		TEST_METHOD(Length_OfRectangle_IsCorrect_When0)
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
