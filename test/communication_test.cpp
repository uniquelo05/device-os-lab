/**
 * @file communication_test.cpp
 * @brief Unit tests for communication module.
 *
 * This file contains unit tests for the communication protocols.
 */

#include "communication.h"
#include <gtest/gtest.h>

TEST(CommunicationTest, Init) {
    ASSERT_NO_THROW(communication_init());
}

TEST(CommunicationTest, Send) {
    const char* data = "Hello, World!";
    size_t length = 13;
    ASSERT_EQ(communication_send(data, length), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
