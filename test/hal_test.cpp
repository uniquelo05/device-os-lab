/**
 * @file hal_test.cpp
 * @brief Unit tests for HAL functions.
 *
 * This file contains unit tests for the hardware abstraction layer (HAL) functions.
 */

#include "hal.h"
#include <gtest/gtest.h>

TEST(HALTest, Init) {
    ASSERT_NO_THROW(hal_init());
}

TEST(HALTest, PerformOperation) {
    ASSERT_EQ(hal_perform_operation(), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
