/**
 * @file hal.h
 * @brief HAL API definitions.
 *
 * This file contains the declarations of hardware abstraction layer (HAL) functions.
 */

#pragma once

/**
 * @brief Initializes the hardware abstraction layer.
 */
void hal_init();

/**
 * @brief Performs a hardware operation.
 *
 * @return int Returns 0 on success, or an error code on failure.
 */
int hal_perform_operation();
