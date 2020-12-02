#include "pch.h"
#include "Calculator.h"
#include "TestFixture.h"
TEST_F(TestFixture, Add1ArgTest) {
		char* str = "5";
		int expected = 5;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, Add2ArgTest) {
		char* str = "5,4";
		int expected = 9;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, Add3ArgTest) {
		char* str = "5,4,1";
		int expected = 10;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddSeparatorTest1) {
		char* str = "5,41";
		int expected = -1;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddSeparatorTest2) {
		char* str = "54,1";
		int expected = -1;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddSeparatorTest3) {
		char* str = "54";
		int expected = -1;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddEmpty) {
		char* str = "";
		int expected = 0;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddNegativ) {
		char* str = "-1,1";
		int expected = -2;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, Add4argTest) {
		char* str = "1,1,3,6";
		int expected = 11;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, Add5argTest) {
		char* str = "1,1,3,6,1";
		int expected = 12;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddNewLineTest) {
		char* str = "1,1\n3,6";
		int expected = 11;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddAllDelimTest) {
		char* str = "//;\n1;1\n3;6";
		int expected = 11;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddInvalidArgTest) {
		char* str = "1,3,6\n";
		int expected = -1;
		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, Sample) {
		char* str = "1,5,6";
		int expected = 12;

		int actual = calc->Add(str);
		ASSERT_EQ(expected, actual);
	}