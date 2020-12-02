#include "pch.h"
#include "Calculator.h"
#include "TestFixtureWithParam.h"

	TEST_P(TestFixtureWithParam, Sample) {
		char* op = GetParam().op;
		int expected = GetParam().expected;
		int actual = calc->Add(op);
		ASSERT_EQ(expected, actual);
	}