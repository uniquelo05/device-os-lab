/*
 * Copyright (c) 2022 Particle Industries, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#include "watchdog_hal.h"

// Static variables to store watchdog state
static hal_watchdog_info_t watchdog_info = {
    .size = sizeof(hal_watchdog_info_t),
    .version = HAL_WATCHDOG_VERSION,
    .mandatory_caps = HAL_WATCHDOG_CAPS_RESET,
    .optional_caps = HAL_WATCHDOG_CAPS_ALL,
    .state = HAL_WATCHDOG_STATE_DISABLED
};

int hal_watchdog_set_config(hal_watchdog_instance_t instance, const hal_watchdog_config_t* config, void* reserved) {
    if (!config || config->timeout_ms == 0) {
        return -1; // Invalid configuration
    }
    watchdog_info.config = *config;
    watchdog_info.state = HAL_WATCHDOG_STATE_CONFIGURED;
    return 0;
}

int hal_watchdog_on_expired_callback(hal_watchdog_instance_t instance, hal_watchdog_on_expired_callback_t callback, void* context, void* reserved) {
    // Placeholder for callback registration
    return 0;
}

int hal_watchdog_start(hal_watchdog_instance_t instance, void* reserved) {
    if (watchdog_info.state != HAL_WATCHDOG_STATE_CONFIGURED) {
        return -1; // Watchdog not configured
    }
    watchdog_info.state = HAL_WATCHDOG_STATE_STARTED;
    return 0;
}

int hal_watchdog_stop(hal_watchdog_instance_t instance, void* reserved) {
    if (watchdog_info.state != HAL_WATCHDOG_STATE_STARTED) {
        return -1; // Watchdog not started
    }
    watchdog_info.state = HAL_WATCHDOG_STATE_STOPPED;
    return 0;
}

int hal_watchdog_refresh(hal_watchdog_instance_t instance, void* reserved) {
    if (watchdog_info.state != HAL_WATCHDOG_STATE_STARTED) {
        return -1; // Watchdog not started
    }
    // Refresh the watchdog timer (placeholder)
    return 0;
}

int hal_watchdog_get_info(hal_watchdog_instance_t instance, hal_watchdog_info_t* info, void* reserved) {
    if (!info) {
        return -1; // Invalid argument
    }
    *info = watchdog_info;
    return 0;
}

bool hal_watchdog_reset_flagged_deprecated() {
    // Placeholder for deprecated functionality
    return false;
}

void hal_watchdog_refresh_deprecated(void) {
    // Placeholder for deprecated functionality
}