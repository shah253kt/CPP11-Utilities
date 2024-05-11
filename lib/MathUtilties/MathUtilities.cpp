#include "MathUtilities.h"

#include <cmath>

namespace MathUtilities
{
    bool equals(float a, float b, float epsilon)
    {
        return std::abs(a - b) < epsilon;
    }
}