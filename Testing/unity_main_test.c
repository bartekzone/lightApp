#include "unity.h"

extern void test_gpio_set_valid_led_should_return_true(void);
extern void test_gpio_set_invalid_should_return_false(void);

// Wspólne hooki Unity
void setUp(void) {}
void tearDown(void) {}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_gpio_set_valid_led_should_return_true);
    RUN_TEST(test_gpio_set_invalid_should_return_false);
    return UNITY_END();
}