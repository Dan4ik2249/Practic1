#include <gtest/gtest.h>
extern "C"
{
#include "../include/piecewise.h"
}
TEST(TestsForFunc1, minus4equal3)
{
	ASSERT_DOUBLE_EQ(p(-4), 3);
}
TEST(TestsForFunc2, minus2i5and1i5)
{
	ASSERT_DOUBLE_EQ(p(-2.5), 4);
}
TEST(TestsForFunc3, 2and1)
{
	ASSERT_DOUBLE_EQ(p(1), 2);
}
TEST(TestsForFunc4, 3and2i5)
{
	ASSERT_DOUBLE_EQ(p(3), 14);
}
TEST(TestsForElse, minus10and30)
{
	ASSERT_DOUBLE_EQ(p(-10), -1);
}
