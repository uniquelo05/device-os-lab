/**
 * @file communication_dynalib.h
 * @brief Dynamic library API definitions for communication module.
 *
 * This file contains the declarations of dynamic library support for communication protocols.
 */

#pragma once

#include <cstddef>

/**
 * @brief Initializes the communication module (dynamic library).
 */
void communication_dynalib_init();

/**
 * @brief Sends data using the new communication protocol (dynamic library).
 *
 * @param data The data to send.
 * @param length The length of the data.
 * @return int Returns 0 on success, or an error code on failure.
 */
int communication_dynalib_send(const char* data, size_t length);
