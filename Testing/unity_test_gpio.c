#include "Gpio.h"
#include "unity.h"

void test_gpio_set_valid_led_should_return_true(void) {
    TEST_ASSERT_TRUE(gpio_set(GPIO_SIGNAL_LED));
}

void test_gpio_set_invalid_should_return_false(void) {
    TEST_ASSERT_FALSE(gpio_set(GPIO_SIGNAL_COUNT));  // poza zakresem
}