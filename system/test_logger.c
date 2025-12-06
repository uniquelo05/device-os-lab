#include "logging.h"
#include <cassert>
#include <iostream>

void test_logger() {
    logDebug("Test debug message");
    logInfo("Test info message");
    logError("Test error message");
    std::cout << "Logger test completed!" << std::endl;
}

int main() {
    test_logger();
    return 0;
}
