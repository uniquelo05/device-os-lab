#include "catch.hpp"
#include "hal_gpio.h"

TEST_CASE("GPIO helpers - Pin initialization", "[gpio]") {
    hal_gpio_t pin = HAL_GPIO_PIN_NONE;

    SECTION("Initialize GPIO pin") {
        REQUIRE(hal_gpio_init(&pin, HAL_GPIO_MODE_OUTPUT) == 0);
        REQUIRE(pin != HAL_GPIO_PIN_NONE);
    }
}

TEST_CASE("GPIO helpers - Pin state manipulation", "[gpio]") {
    hal_gpio_t pin = HAL_GPIO_PIN_NONE;
    hal_gpio_init(&pin, HAL_GPIO_MODE_OUTPUT);

    SECTION("Set GPIO pin high") {
        REQUIRE(hal_gpio_write(&pin, 1) == 0);
        REQUIRE(hal_gpio_read(&pin) == 1);
    }

    SECTION("Set GPIO pin low") {
        REQUIRE(hal_gpio_write(&pin, 0) == 0);
        REQUIRE(hal_gpio_read(&pin) == 0);
    }
}

TEST_CASE("GPIO helpers - Pin cleanup", "[gpio]") {
    hal_gpio_t pin = HAL_GPIO_PIN_NONE;
    hal_gpio_init(&pin, HAL_GPIO_MODE_OUTPUT);

    SECTION("Deinitialize GPIO pin") {
        REQUIRE(hal_gpio_deinit(&pin) == 0);
        REQUIRE(pin == HAL_GPIO_PIN_NONE);
    }
}