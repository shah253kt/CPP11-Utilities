#include "MathUtilities.h"

void setup()
{
    auto a = MathUtilities::equals(1.234, 1.2345);      // Returns true
    auto b = MathUtilities::equals(1.234, 1.2345, 0.1); // Returns false
    auto c = MathUtilities::equals(1.234, 1.24);        // Returns false
}

void loop()
{
}