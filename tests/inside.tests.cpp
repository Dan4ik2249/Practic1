#include "gtest/gtest.h"
extern "C"
{
#include "../include/inside.h"
}
TEST(TestsOfInsideFunc, Xminus5Yminus2R7)
{
	ASSERT_DOUBLE_EQ(k(-5, -2, 7), 1);
}
TEST(TestsOfInsideFunc2, x2y3R7)
{
	ASSERT_DOUBLE_EQ(k(2, 3, 7), 1);
}
TEST(TestsOfInsideFunc3, x6y8R2)
{
	ASSERT_DOUBLE_EQ(k(6, 8, 2), 0);
}
TEST(TestsOfInsideFunc, Xminus7Y4R3)
{
	ASSERT_DOUBLE_EQ(k(-7, 4, 3), 0);
}
