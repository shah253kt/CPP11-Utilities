#include "StringUtilities.h"

#include <algorithm>

namespace StringUtilities
{
    void ltrim(std::string &str)
    {
        const auto iter = std::find_if(str.begin(), str.end(), [](const char c)
                                       { return !isspace(c); });

        str.erase(str.begin(), iter);
    }

    void rtrim(std::string &str)
    {
        const auto iter = std::find_if(str.rbegin(), str.rend(), [](const char c)
                                       { return !isspace(c); });

        str.erase(iter.base(), str.end());
    }

    void trim(std::string &str)
    {
        ltrim(str);
        rtrim(str);
    }
}