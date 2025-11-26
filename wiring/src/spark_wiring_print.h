#pragma once

#include "spark_wiring_string.h"

class Print {
    // ...existing code...

public:
    // Optimized method for printing Strings
    size_t print(const String& str) {
        return write(str.c_str(), str.length());
    }

    // ...existing code...
};