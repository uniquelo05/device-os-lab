#include "memory.h"
#include <cassert>
#include <iostream>

void test_memory_leak() {
    void* a = platform_malloc(100);
    void* b = platform_malloc(200);
    platform_free(a);
    // intentionally not freeing b to simulate leak
    size_t leaks = platform_memory_leak_count();
    std::cout << "Memory leak count: " << leaks << std::endl;
    assert(leaks == 1);
    platform_memory_cleanup();
    assert(platform_memory_leak_count() == 0);
    std::cout << "Memory leak test passed!" << std::endl;
}

int main() {
    test_memory_leak();
    return 0;
}
