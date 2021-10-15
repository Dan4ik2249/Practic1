#include <gtest/gtest.h>
extern "C"
{
#include "../include/logic.h"
}
TEST (LogicTests, 000)
{
	ASSERT_DOUBLE_EQ(result(0, 0, 0), 1);
}
TEST (LogicTests, 001)
{
	ASSERT_DOUBLE_EQ(result(0, 0, 1), 1);
}
TEST( LogicTests, 010)
{
	ASSERT_DOUBLE_EQ(result(0, 1, 0), 1);
}
TEST (LoficTests, 100)
{
	ASSERT_DOUBLE_EQ(result(1, 0, 0), 1);
}
TEST (LogicTests, 011)
{
	ASSERT_DOUBLE_EQ(result(0, 1, 1), 1);
}
TEST (LogicTests, 101)
{
	ASSERT_DOUBLE_EQ(result(1, 0, 1), 1);
}
TEST (LogicTests, 110)
{
	ASSERT_DOUBLE_EQ(result(1, 1, 0), 1);
}
TEST (LogicTests, 111)
{
	ASSERT_DOUBLE_EQ(result(1, 1, 1), 1);
}
