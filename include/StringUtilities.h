#pragma once

#include <string>

namespace StringUtilities
{
    /// @brief Remove white spaces at the beginning of the string.
    /// @param str String to trim.
    void ltrim(std::string &str);

    /// @brief Remove white spaces at the end of the string.
    /// @param str String to trim.
    void rtrim(std::string &str);

    /// @brief Remove white spaces at the beginning and end of the string.
    /// @param str String to trim.
    void trim(std::string &str);
}
