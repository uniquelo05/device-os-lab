


// main.cpp
// Thêm log khi khởi tạo hệ thống
#include "services/logger/logger.h"
#include "network.h"

int main() {
    logInfo("System initialization started.");

    // Kiểm tra kết nối mạng
    if (check_network_connectivity()) {
        logInfo("Network connectivity: OK");
    } else {
        logInfo("Network connectivity: FAILED");
    }

    // ...existing code...

    logInfo("System initialization completed.");
    return 0;
}
