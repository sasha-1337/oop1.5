#include "pch.h"
#include "CppUnitTest.h"
#include "../oop1.5/Pair.h"
#include "D:\Student\oop1.5\oop1.5\Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a;
			int t;
			t = a.Sum_1(1, 2);
			Assert::AreEqual(t, 3);
		}
	};
}
