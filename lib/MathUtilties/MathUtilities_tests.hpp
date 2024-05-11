#pragma once

#include "MathUtilities.h"

#include <tuple>

#include <gtest/gtest.h>

class MathUtilitiesParameterizedTest : public ::testing::TestWithParam<std::tuple<float, float, float, bool>>
{
protected:
    float getInputValue1() const
    {
        return std::get<0>(GetParam());
    }

    float getInputValue2() const
    {
        return std::get<1>(GetParam());
    }

    float getEpsilon() const
    {
        return std::get<2>(GetParam());
    }

    bool getExpectedResult() const
    {
        return std::get<3>(GetParam());
    }
};

TEST_P(MathUtilitiesParameterizedTest, correctly_evaluates_input_data)
{
    // ARRANGE

    // ACT
    const auto result = MathUtilities::equals(getInputValue1(), getInputValue2(), getEpsilon());

    // ASSERT
    ASSERT_EQ(result, getExpectedResult());
}

INSTANTIATE_TEST_SUITE_P(encode, MathUtilitiesParameterizedTest,
                         ::testing::Values(
                             std::make_tuple(1, 1, 0.1, true),
                             std::make_tuple(0.3, 0.29999999, 0.1, true),
                             std::make_tuple(0.3, 0.299, 0.0001, false),
                             std::make_tuple(0.29999999, 0.3, 0.1, true)));
