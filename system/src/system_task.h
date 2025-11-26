#pragma once

#include <stdint.h>

/**
 * @brief Delays the execution of the current task for the specified duration.
 * 
 * @param duration_ms The delay duration in milliseconds.
 */
void system_task_delay(uint32_t duration_ms);