/**
 * @file communication.h
 * @brief Communication module API definitions.
 *
 * This file contains the declarations of communication protocols.
 */

#pragma once

#include <cstddef>

/**
 * @brief Initializes the communication module.
 */
void communication_init();

/**
 * @brief Sends data using the new communication protocol.
 *
 * @param data The data to send.
 * @param length The length of the data.
 * @return int Returns 0 on success, or an error code on failure.
 */
int communication_send(const char* data, size_t length);
