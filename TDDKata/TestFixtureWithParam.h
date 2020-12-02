#pragma once
#include "TestFixture.h"

struct Param
{
    char * op;
    int expected;
    Param(char * op, int expected) :
        op(op), expected(expected) {}
};

class TestFixtureWithParam :
    public TestFixture, public ::testing::WithParamInterface<Param>
{
};

