# C++11 Utilities
This library was made specifically for providing some utilities to embedded platforms.

## Basic Usage
### String Utilities
```cpp
#include "StringUtilities.h"
#include <string>

void foo() {
    std::string myString = " \n   foobar \n   \r ";
    StringUtilities::ltrim(myString); // Trim whitespaces from the left
    StringUtilities::rtrim(myString); // Trim whitespaces from the right
    StringUtilities::trim(myString);  // Trim whitespaces from both side
}

```

### Math Utilitites
```cpp
#include "MathUtilities.h"

void foo() {
    float a = 1.23;
    float b = 2.34;
    if (!MathUtilities::equals(a, b)) {
        // Your code
    }
}
```

## Disclaimer
I have only tested this using ESP32. I cannot guarantee that it will work on other devices.