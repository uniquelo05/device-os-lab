#ifndef PLATFORM_MEMORY_H
#define PLATFORM_MEMORY_H
#include <cstddef>
void* platform_malloc(size_t size);
void platform_free(void* ptr);
void platform_memory_cleanup();
size_t platform_memory_leak_count();
#endif // PLATFORM_MEMORY_H
