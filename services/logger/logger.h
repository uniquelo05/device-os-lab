// logger.h
// Cập nhật định nghĩa hàm log
#ifndef LOGGER_H
#define LOGGER_H

#include <string>

void logDebug(const std::string& message);
void logInfo(const std::string& message);
void logError(const std::string& message);

#endif // LOGGER_H