/**
 * @file hal_dynalib.h
 * @brief Dynamic library API definitions for HAL functions.
 *
 * This file contains the declarations of dynamic library support for HAL functions.
 */

#pragma once

/**
 * @brief Initializes the HAL dynamic library.
 */
void hal_dynalib_init();

/**
 * @brief Performs a hardware operation using the HAL dynamic library.
 *
 * @return int Returns 0 on success, or an error code on failure.
 */
int hal_dynalib_perform_operation();
