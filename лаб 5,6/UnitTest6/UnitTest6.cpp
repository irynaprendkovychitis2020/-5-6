#include "pch.h"
#include "CppUnitTest.h"
#include "../лаб 5,6/лаб 5,6.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const double a = 1;
			const double b = 2;
			t = h(a, b);
			Assert::AreEqual(t, 1.4);
		}
	};
}
