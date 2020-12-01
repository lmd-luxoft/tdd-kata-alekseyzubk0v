#include "pch.h"
#include "Calculator.h"
	TEST(TDDKata, Add1ArgTest) {
		char* str = "5";
		int expected = 5;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, Add2ArgTest) {
		char* str = "5,4";
		int expected = 9;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, Add3ArgTest) {
		char* str = "5,4,1";
		int expected = 10;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, AddSeparatorTest1) {
		char* str = "5,41";
		int expected = -1;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, AddSeparatorTest2) {
		char* str = "54,1";
		int expected = -1;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, AddSeparatorTest3) {
		char* str = "54";
		int expected = -1;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, AddEmpty) {
		char* str = "";
		int expected = 0;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, AddNegativ) {
		char* str = "-1,1";
		int expected = -2;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, Add4argTest) {
		char* str = "1,1,3,6";
		int expected = 11;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, Add5argTest) {
		char* str = "1,1,3,6,1";
		int expected = 12;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, AddNewLineTest) {
		char* str = "1,1\n3,6";
		int expected = 11;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST(TDDKata, AddAllDelimTest) {
		char* str = "//;\n1;1\n3;6";
		int expected = 11;
		Calculator myCalculator;

		int actual = myCalculator.Add(str);
		ASSERT_EQ(expected, actual);
	}