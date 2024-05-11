#ifndef UNIT_TEST

#include "StringUtilities.h"
#include "MathUtilities.h"

#include <Arduino.h>

#include <string>

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    Serial.println("\n--------String Utilities--------");
    Serial.printf("ltrim result: \'%s\'\n", StringUtilities::ltrim("    \r  \n My Actual Data \r \n   ").c_str());
    Serial.printf("rtrim result: \'%s\'\n", StringUtilities::rtrim("    \r  \n My Actual Data \r \n   ").c_str());
    Serial.printf("trim result: \'%s\'\n", StringUtilities::trim("    \r  \n My Actual Data \r \n   ").c_str());

    Serial.println("\n--------Math Utilities--------");
    Serial.printf("1.234 == 1.2345 (with epsilon = 0.001) : %s\n", MathUtilities::equals(1.234, 1.2345) ? "true" : "false");
    Serial.printf("1.234 == 1.245 (with epsilon = 0.01): %s\n", MathUtilities::equals(1.234, 1.245, 0.01) ? "true" : "false");
    Serial.printf("1.234 == 1.23 (with epsilon = 0.001) : %s", MathUtilities::equals(1.234, 1.23) ? "true" : "false");

    delay(5000);
}

#endif
