#include <cstdlib>
#include <iostream>
#include <vector>

// Simple memory tracker for demonstration
static std::vector<void*> allocations;

void* platform_malloc(size_t size) {
    void* ptr = std::malloc(size);
    if (ptr) allocations.push_back(ptr);
    return ptr;
}

void platform_free(void* ptr) {
    if (ptr) {
        std::free(ptr);
        auto it = std::find(allocations.begin(), allocations.end(), ptr);
        if (it != allocations.end()) allocations.erase(it);
    }
}

void platform_memory_cleanup() {
    for (void* ptr : allocations) {
        std::free(ptr);
    }
    allocations.clear();
}

size_t platform_memory_leak_count() {
    return allocations.size();
}
