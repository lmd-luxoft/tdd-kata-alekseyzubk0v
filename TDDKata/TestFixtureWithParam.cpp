#include "pch.h"
#include "TestFixtureWithParam.h"
#include <vector>

//INSTANTIATE_TEST_CASE_P(ParametrizedTest, TestFixtureWithParam,
//	::testing::Values(Param("2,3", 5), Param("2,3", 5)))

std::vector<Param> CreateParametersSet()
{
	std::vector<Param> p;
	p.push_back(Param("5", 5));
	p.push_back(Param("5,4", 9));
	p.push_back(Param("5,4,1", 10));
	p.push_back(Param("5,41", -1));
	p.push_back(Param("54,1", -1));
	p.push_back(Param("54", -1));
	p.push_back(Param("-1,1", -2));
	p.push_back(Param("1,1,3,6", 11));
	p.push_back(Param("1,1,3,6,1", 12));
	p.push_back(Param("1,1\n3,6", 11));
	p.push_back(Param("//;\n1;1\n3;6", 11));
	p.push_back(Param("1,3,6\n", -1));
	p.push_back(Param("1,5,6", 12));
	return p;
}

INSTANTIATE_TEST_CASE_P(ParametrizedTest, TestFixtureWithParam,
	::testing::ValuesIn(CreateParametersSet()));