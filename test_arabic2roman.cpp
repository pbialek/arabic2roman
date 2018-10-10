#include "gtest/gtest.h"

#include "arabic2roman.hpp"

TEST(Arabic2Roman, ReturnsXVI) {
    //TODO: with dummy implementation, function always returns "XVI"
	int i = 3;
	std::string actual;

    actual = arabic2roman(i);
	EXPECT_EQ("XVI", actual);

	i = 12;
    actual = arabic2roman(i);
    EXPECT_EQ("XVI", actual);
}