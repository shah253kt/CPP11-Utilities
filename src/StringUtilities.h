#pragma once

#include <string>

namespace StringUtilities
{
    /// @brief Remove white spaces at the beginning of the string.
    /// @param str String to trim.
    std::string ltrim(std::string &str);

    /// @brief Remove white spaces at the beginning of the string.
    /// @param str String to trim.
    std::string ltrim(std::string &&str);

    /// @brief Remove white spaces at the end of the string.
    /// @param str String to trim.
    std::string rtrim(std::string &str);

    /// @brief Remove white spaces at the end of the string.
    /// @param str String to trim.
    std::string rtrim(std::string &&str);

    /// @brief Remove white spaces at the beginning and end of the string.
    /// @param str String to trim.
    std::string trim(std::string &str);

    /// @brief Remove white spaces at the beginning and end of the string.
    /// @param str String to trim.
    std::string trim(std::string &&str);
}
