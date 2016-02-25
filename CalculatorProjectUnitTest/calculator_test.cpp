#include "stdafx.h"
#include "CppUnitTest.h"
#include "calculator.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace CalculatorProject;

namespace CalculatorProjectUnitTest
{		
	TEST_CLASS(CalculatorTest)
	{
	public:
		
		TEST_METHOD_INITIALIZE(setUp)
		{
			// method initialization code
			Logger::WriteMessage("CalculatorTest setUp()\n");
			calculator = new Calculator();
		}

		TEST_METHOD_CLEANUP(tearDown)
		{
			// test method cleanup  code
			Logger::WriteMessage("CalculatorTest tearDown()\n");
			delete calculator;
		}

		TEST_METHOD(testAdd)
		{
			// TODO: Your test code here
			Assert::AreEqual(9, calculator->add(6, 3));
			Logger::WriteMessage("testAdd() finish testing!\n");
		}
		TEST_METHOD(testMinus)
		{
			// TODO: Your test code here
			Assert::AreEqual(3, calculator->minus(6, 3));
			Logger::WriteMessage("testMinus() finish testing!\n");
		}
		TEST_METHOD(testDivide)
		{
			// TODO: Your test code here
			Assert::AreEqual(2, calculator->divide(6, 3));
			Logger::WriteMessage("testDivide() finish testing!\n");
		}
	private:
		Calculator *calculator;
	};
}