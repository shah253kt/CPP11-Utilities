#pragma once

#include "StringUtilities.h"

#include <utility>

#include <gtest/gtest.h>

class StringUtilitiesParameterizedTest : public ::testing::TestWithParam<std::pair<std::string, std::string>>
{
protected:
    std::string getInputString() const
    {
        return GetParam().first;
    }

    std::string getExpectedOutputString() const
    {
        return GetParam().second;
    }
};

class LTrimStringUtilitiesParameterizedTest : public StringUtilitiesParameterizedTest
{
};

class RTrimStringUtilitiesParameterizedTest : public StringUtilitiesParameterizedTest
{
};

class TrimStringUtilitiesParameterizedTest : public StringUtilitiesParameterizedTest
{
};

TEST_P(LTrimStringUtilitiesParameterizedTest, remove_white_spaces_from_the_start_of_the_string)
{
    // ARRANGE
    std::string input = getInputString();

    // ACT
    StringUtilities ::ltrim(input);

    // ASSERT
    ASSERT_EQ(input, getExpectedOutputString());
}

INSTANTIATE_TEST_SUITE_P(ltrim, LTrimStringUtilitiesParameterizedTest,
                         ::testing::Values(
                             std::make_pair("   \r\nInput string\r\n  ", "Input string\r\n  "),
                             std::make_pair("   \r\n\r\n  ", ""),
                             std::make_pair("TEST   \r\n", "TEST   \r\n")));

TEST_P(RTrimStringUtilitiesParameterizedTest, remove_white_spaces_from_the_end_of_the_string)
{
    // ARRANGE
    std::string input = getInputString();

    // ACT
    StringUtilities ::rtrim(input);

    // ASSERT
    ASSERT_EQ(input, getExpectedOutputString());
}

INSTANTIATE_TEST_SUITE_P(rtrim, RTrimStringUtilitiesParameterizedTest,
                         ::testing::Values(
                             std::make_pair("   \r\nInput string\r\n  ", "   \r\nInput string"),
                             std::make_pair("   \r\n\r\n  ", ""),
                             std::make_pair("   \r\nTEST", "   \r\nTEST")));

TEST_P(TrimStringUtilitiesParameterizedTest, remove_white_spaces_from_the_beginning_and_end_of_the_string)
{
    // ARRANGE
    std::string input = getInputString();

    // ACT
    StringUtilities ::trim(input);

    // ASSERT
    ASSERT_EQ(input, getExpectedOutputString());
}

INSTANTIATE_TEST_SUITE_P(trim, TrimStringUtilitiesParameterizedTest,
                         ::testing::Values(
                             std::make_pair("   \r\nInput string\r\n  ", "Input string"),
                             std::make_pair("   \r\n\r\n  ", "")));

TEST(trim, TrimRValue) {
    ASSERT_EQ("My String \n", StringUtilities::ltrim("\r\n  My String \n"));
    ASSERT_EQ("\r\n  My String", StringUtilities::rtrim("\r\n  My String \n"));
    ASSERT_EQ("My String", StringUtilities::trim("\r\n  My String \n"));
}