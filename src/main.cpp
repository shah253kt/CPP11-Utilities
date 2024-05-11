#ifndef UNIT_TEST

#include "StringUtilities.h"

#include <Arduino.h>

#include <string>

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    Serial.println("\n----------------");
    Serial.printf("ltrim result: \'%s\'\n", StringUtilities::ltrim("    \r  \n My Actual Data \r \n   ").c_str());
    Serial.printf("rtrim result: \'%s\'\n", StringUtilities::rtrim("    \r  \n My Actual Data \r \n   ").c_str());
    Serial.printf("trim result: \'%s\'\n", StringUtilities::trim("    \r  \n My Actual Data \r \n   ").c_str());

    delay(5000);
}

#endif
