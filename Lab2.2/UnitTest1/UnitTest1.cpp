#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\KATERYNA\Desktop\OOP\Lab2.2\Lab2.2\Lab2.2\CRealNumber.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			RealNumber rr(33.1);
			Assert::AreEqual(rr.GetX(), 33.1f);
		}
	};
}
