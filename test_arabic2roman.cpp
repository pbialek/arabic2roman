#include "gtest/gtest.h"

#include "arabic2roman.hpp"

TEST(Arabic2Roman, ChangeUnities) {
    const std::string unities[3] = {"I", "V", "X"};
    EXPECT_EQ("I", signsConverter(1, unities));
    EXPECT_EQ("II", signsConverter(2, unities));
    EXPECT_EQ("III", signsConverter(3, unities));
    EXPECT_EQ("IV", signsConverter(4, unities));
    EXPECT_EQ("V", signsConverter(5, unities));
    EXPECT_EQ("VI", signsConverter(6, unities));
    EXPECT_EQ("VII", signsConverter(7, unities));
    EXPECT_EQ("VIII", signsConverter(8, unities));
    EXPECT_EQ("IX", signsConverter(9, unities));
    EXPECT_EQ("", signsConverter(0, unities));
}

TEST(Arabic2Roman, ChangeTens) {
    const std::string tens[3] = {"X", "L", "C"};
    EXPECT_EQ("X", signsConverter(1, tens));
    EXPECT_EQ("XX", signsConverter(2, tens));
    EXPECT_EQ("XXX", signsConverter(3, tens));
    EXPECT_EQ("XL", signsConverter(4, tens));
    EXPECT_EQ("L", signsConverter(5, tens));
    EXPECT_EQ("LX", signsConverter(6, tens));
    EXPECT_EQ("LXX", signsConverter(7, tens));
    EXPECT_EQ("LXXX", signsConverter(8, tens));
    EXPECT_EQ("XC", signsConverter(9, tens));
    EXPECT_EQ("", signsConverter(0, tens));
}

TEST(Arabic2Roman, ChangeHundreds) {
    const std::string hundreds[3] = {"C", "D", "M"};
    EXPECT_EQ("C", signsConverter(1, hundreds));
    EXPECT_EQ("CC", signsConverter(2, hundreds));
    EXPECT_EQ("CCC", signsConverter(3, hundreds));
    EXPECT_EQ("CD", signsConverter(4, hundreds));
    EXPECT_EQ("D", signsConverter(5, hundreds));
    EXPECT_EQ("DC", signsConverter(6, hundreds));
    EXPECT_EQ("DCC", signsConverter(7, hundreds));
    EXPECT_EQ("DCCC", signsConverter(8, hundreds));
    EXPECT_EQ("CM", signsConverter(9, hundreds));
    EXPECT_EQ("", signsConverter(0, hundreds));
}

TEST(Arabic2Roman, shouldConvertNumbers) {
    EXPECT_EQ("", arabic2roman(0));
    EXPECT_EQ("XIX", arabic2roman(19));
    EXPECT_EQ("XLVII", arabic2roman(47));
    EXPECT_EQ("CXI", arabic2roman(111));
    EXPECT_EQ("DLV", arabic2roman(555));
    EXPECT_EQ("DCCCLXXXVIII", arabic2roman(888));
    EXPECT_EQ("CMXCIX", arabic2roman(3999));
}

TEST(Arabic2Roman, maxSizeIs3999) {
    EXPECT_EQ("", arabic2roman(4000));
    EXPECT_EQ("", arabic2roman(9999));
}