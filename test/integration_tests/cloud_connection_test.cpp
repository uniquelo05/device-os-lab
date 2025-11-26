#include "catch.hpp"
#include "cloud_connection.h"
#include "spark_wiring_logging.h"

TEST_CASE("Cloud connection - Successful connection", "[cloud]") {
    SECTION("Connect to cloud") {
        REQUIRE(cloud_connect() == 0);
        REQUIRE(cloud_is_connected() == true);
    }
}

TEST_CASE("Cloud connection - Failed connection", "[cloud]") {
    SECTION("Simulate connection failure") {
        cloud_simulate_failure(true);
        REQUIRE(cloud_connect() != 0);
        REQUIRE(cloud_is_connected() == false);
        cloud_simulate_failure(false);
    }
}

TEST_CASE("Cloud connection - Reconnection", "[cloud]") {
    SECTION("Reconnect after disconnection") {
        REQUIRE(cloud_connect() == 0);
        REQUIRE(cloud_is_connected() == true);

        cloud_disconnect();
        REQUIRE(cloud_is_connected() == false);

        REQUIRE(cloud_connect() == 0);
        REQUIRE(cloud_is_connected() == true);
    }
}