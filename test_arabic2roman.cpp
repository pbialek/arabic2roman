#include "gtest/gtest.h"

#include "arabic2roman.hpp"

TEST(Arabic2Roman, ChangeUnities) {
    EXPECT_EQ("I", unitiesConverter(1));
    EXPECT_EQ("II", unitiesConverter(2));
    EXPECT_EQ("III", unitiesConverter(3));
    EXPECT_EQ("IV", unitiesConverter(4));
    EXPECT_EQ("V", unitiesConverter(5));
    EXPECT_EQ("VI", unitiesConverter(6));
    EXPECT_EQ("VII", unitiesConverter(7));
    EXPECT_EQ("VIII", unitiesConverter(8));
    EXPECT_EQ("IX", unitiesConverter(9));
    EXPECT_EQ("", unitiesConverter(0));
}

TEST(Arabic2Roman, ChangeTens) {
    EXPECT_EQ("X", tensConverter(10));
    EXPECT_EQ("XX", tensConverter(20));
    EXPECT_EQ("XXX", tensConverter(30));
    EXPECT_EQ("XL", tensConverter(40));
    EXPECT_EQ("L", tensConverter(50));
    EXPECT_EQ("LX", tensConverter(60));
    EXPECT_EQ("LXX", tensConverter(70));
    EXPECT_EQ("LXXX", tensConverter(80));
    EXPECT_EQ("XC", tensConverter(90));
    EXPECT_EQ("", tensConverter(0));
}

TEST(Arabic2Roman, ChangeHundreds) {
    EXPECT_EQ("C", hundredsConverter(100));
    EXPECT_EQ("CC", hundredsConverter(200));
    EXPECT_EQ("CCC", hundredsConverter(300));
    EXPECT_EQ("CD", hundredsConverter(400));
    EXPECT_EQ("D", hundredsConverter(500));
    EXPECT_EQ("DC", hundredsConverter(600));
    EXPECT_EQ("DCC", hundredsConverter(700));
    EXPECT_EQ("DCCC", hundredsConverter(800));
    EXPECT_EQ("CM", hundredsConverter(900));
    EXPECT_EQ("", hundredsConverter(0));
}

TEST(Arabic2Roman, shouldConvertNumbers) {
    EXPECT_EQ("", arabic2roman(0));
    EXPECT_EQ("XIX", arabic2roman(19));
    EXPECT_EQ("XLVII", arabic2roman(47));
    EXPECT_EQ("CXI", arabic2roman(111));
    EXPECT_EQ("DLV", arabic2roman(555));
    EXPECT_EQ("DCCCLXXXVIII", arabic2roman(888));
}