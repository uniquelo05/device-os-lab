#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include "spark_wiring_print.h"

class String {
    char* buffer;
    size_t bufSize;
    size_t strLen;

    void reserve(size_t newSize) {
        if (newSize > bufSize) {
            char* newBuffer = new char[newSize + 1];
            if (buffer) {
                strcpy(newBuffer, buffer);
                delete[] buffer;
            }
            buffer = newBuffer;
            bufSize = newSize;
        }
    }

public:
    String() : buffer(nullptr), bufSize(0), strLen(0) {}

    String(const char* str) : buffer(nullptr), bufSize(0), strLen(0) {
        if (str) {
            strLen = strlen(str);
            reserve(strLen);
            strcpy(buffer, str);
        }
    }

    ~String() {
        delete[] buffer;
    }

    size_t length() const {
        return strLen;
    }

    // Optimized method for concatenation
    String& concat(const char* str) {
        if (str) {
            size_t len = strlen(str);
            if (len > 0) {
                reserve(length() + len);
                strcat(buffer, str);
            }
        }
        return *this;
    }

    // Optimized method for substring
    String substring(size_t start, size_t end) const {
        if (start >= length()) {
            return String();
        }
        if (end > length()) {
            end = length();
        }
        size_t newLen = end - start;
        char* newBuffer = new char[newLen + 1];
        strncpy(newBuffer, buffer + start, newLen);
        newBuffer[newLen] = '\0';
        String result(newBuffer);
        delete[] newBuffer;
        return result;
    }

    // ...existing code...
};