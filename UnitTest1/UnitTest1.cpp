#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_1_char/Labbb.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Assert::AreEqual(Count("whilewhile"), 2);

		}
	};
}
