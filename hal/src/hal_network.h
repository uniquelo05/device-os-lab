#pragma once

#include <stdint.h>

/**
 * @brief Attempts to connect to the network.
 * 
 * @return 0 on success, non-zero on failure.
 */
int hal_network_connect();