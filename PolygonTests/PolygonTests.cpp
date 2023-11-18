#include "pch.h"
#include "CppUnitTest.h"

extern "C" {

}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace PolygonTests
{
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
	};
}
