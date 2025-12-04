// logger_test.cpp
// Viết unit test cho các mức log mới
#include "services/logger/logger.h"
#include <cassert>

void testLogging() {
    logDebug("This is a debug message.");
    logInfo("This is an info message.");
    logError("This is an error message.");

    // Add assertions or checks if needed
}

int main() {
    testLogging();
    return 0;
}