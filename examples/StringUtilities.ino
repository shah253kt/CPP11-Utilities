#include "StringUtilities.h"

#include <string>

void setup()
{
    std::string myString1 = "    \r  \n My Actual Data \r \n   ";
    std::string myString2 = "    \r  \n My Actual Data \r \n   ";
    std::string myString3 = "    \r  \n My Actual Data \r \n   ";

    StringUtilities::ltrim(myString1); // myString1 would then be "My Actual Data \r \n   "
    StringUtilities::rtrim(myString2); // myString2 would then be "    \r  \n My Actual Data"
    StringUtilities::trim(myString3);  // myString3 would then be "My Actual Data"
}

void loop()
{
}