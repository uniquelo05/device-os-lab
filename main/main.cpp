// main.cpp
// Thêm log khi khởi tạo hệ thống
#include "services/logger/logger.h"

int main() {
    logInfo("System initialization started.");

    // ...existing code...

    logInfo("System initialization completed.");
    return 0;
}