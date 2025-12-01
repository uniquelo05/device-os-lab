#include "gtest/gtest.h"
#include "gsm0710muxer.h" // Include the GSM0710 muxer header file

// Example test case for GSM0710 muxer
TEST(GSM0710MuxerTest, InitializationTest) {
    GSM0710Muxer muxer;
    ASSERT_TRUE(muxer.initialize());
}

TEST(GSM0710MuxerTest, EncodeFrameTest) {
    GSM0710Muxer muxer;
    muxer.initialize();

    std::vector<uint8_t> input = {0x01, 0x02, 0x03};
    std::vector<uint8_t> output;

    ASSERT_TRUE(muxer.encodeFrame(input, output));
    ASSERT_FALSE(output.empty());
}

TEST(GSM0710MuxerTest, DecodeFrameTest) {
    GSM0710Muxer muxer;
    muxer.initialize();

    std::vector<uint8_t> input = {0xF9, 0x01, 0x02, 0x03, 0xF9};
    std::vector<uint8_t> output;

    ASSERT_TRUE(muxer.decodeFrame(input, output));
    ASSERT_EQ(output.size(), 3);
    ASSERT_EQ(output[0], 0x01);
    ASSERT_EQ(output[1], 0x02);
    ASSERT_EQ(output[2], 0x03);
}

// Add more test cases as needed