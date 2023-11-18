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
	};
}
