#include "StringUtilities.h"

#include <algorithm>

namespace StringUtilities
{
    std::string ltrim(std::string &str)
    {
        const auto iter = std::find_if(str.begin(), str.end(), [](const char c)
                                       { return !isspace(c); });

        str.erase(str.begin(), iter);
        return str;
    }

    std::string ltrim(std::string &&str)
    {
        return ltrim(str);
    }

    std::string rtrim(std::string &str)
    {
        const auto iter = std::find_if(str.rbegin(), str.rend(), [](const char c)
                                       { return !isspace(c); });

        str.erase(iter.base(), str.end());
        return str;
    }

    std::string rtrim(std::string &&str)
    {
        return rtrim(str);
    }

    std::string trim(std::string &str)
    {
        ltrim(str);
        rtrim(str);
        return str;
    }
    
    std::string trim(std::string &&str)
    {
        return trim(str);
    }

}