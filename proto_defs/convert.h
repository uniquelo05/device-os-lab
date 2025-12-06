#ifndef PROTO_DEFS_CONVERT_H
#define PROTO_DEFS_CONVERT_H
#include <stdint.h>
#include <stddef.h>

// Chuyển đổi int sang chuỗi hex
void int_to_hex(uint32_t value, char* out, size_t out_size);
// Chuyển đổi chuỗi hex sang int
uint32_t hex_to_int(const char* hex);

#endif // PROTO_DEFS_CONVERT_H
