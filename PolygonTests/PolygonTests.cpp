#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
#include "../PolygonChecker/Rectangle.h"
#include "../PolygonChecker/triangleAngleSolver.h"
#include "../PolygonChecker/triangleSolver.h"
}

namespace PolygonTests
{
	TEST_CLASS(PolygonTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		}
	};
}