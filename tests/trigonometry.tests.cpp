#include <gtest/gtest.h>
extern "C"
{
#include "../include/trigonometry.h"
}
TEST(TestsOfTrigonomFunc, 60and30)
{
ASSERT_DOUBLE_EQ(trigonom(60, 30), 1);
}
TEST (TestsOfTrigonomFunc, 25i3and3i5)
{
	ASSERT_DOUBLE_EQ(trigonom(25.3, 3.5), 1);
}
TEST (TestsOfTrigonomFunc, 15i222222andMinus2i444)
{
	ASSERT_DOUBLE_EQ(trigonom(15.222222, -2.444), 1);
}
