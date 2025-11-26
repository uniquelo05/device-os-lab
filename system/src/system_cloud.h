#pragma once

#include <stdint.h>
#include <stdbool.h>

/**
 * @brief Initializes the cloud reconnection retry logic.
 */
void cloud_reconnection_init();

/**
 * @brief Attempts to reconnect to the cloud with retry logic.
 * 
 * @return true if reconnection is successful, false otherwise.
 */
bool cloud_reconnect_with_retry();