#include "gsm0710muxer.h"
#include <chrono>
#include <iostream>

void test_muxer_performance() {
    auto start = std::chrono::high_resolution_clock::now();
    // TODO: Thực hiện các thao tác xử lý muxer cần tối ưu
    for (int i = 0; i < 100000; ++i) {
        // Giả lập xử lý gói tin
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << "Muxer processing time: " << duration << " ms" << std::endl;
}

int main() {
    test_muxer_performance();
    return 0;
}
