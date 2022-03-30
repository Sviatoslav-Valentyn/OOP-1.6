#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.6/Time.h"
#include "../lab 1.6/Time.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Time z;
			z.secondCheck(-5);
			bool b = z.secondCheck(-5);
			Assert::AreEqual(false, b);
		}
	};
}
