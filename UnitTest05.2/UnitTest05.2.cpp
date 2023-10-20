#include "pch.h"
#include "CppUnitTest.h"
#include "../PR05.2/PR05.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest052
{
	TEST_CLASS(UnitTest052)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
						int t;
						t = A(2, 3, 1);
						Assert::AreEqual(t, 0, 0.00001);
		}
	};
}
