// logger.cpp
// Thêm các mức log mới (DEBUG, INFO, ERROR)
#include "logger.h"
#include <iostream>

void logDebug(const std::string& message) {
    std::cout << "[DEBUG]: " << message << std::endl;
}

void logInfo(const std::string& message) {
    std::cout << "[INFO]: " << message << std::endl;
}

void logError(const std::string& message) {
    std::cerr << "[ERROR]: " << message << std::endl;
}