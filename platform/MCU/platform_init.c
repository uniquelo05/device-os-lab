#include "platform_init.h"

// Modularized platform initialization function
void platform_init() {
    // Initialize MCU-specific components
    mcu_init();

    // Initialize network components
    net_init();

    // Additional modular initialization can be added here
}