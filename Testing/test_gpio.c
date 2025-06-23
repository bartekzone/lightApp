#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include "Gpio_Cfg.h"
#include "Gpio.h"
#include "ErrorHandler.h"

void test_gpio_set_valid_led(void) {
    bool result = gpio_set(GPIO_SIGNAL_LED);
    assert(result == true);
}

void test_gpio_set_invalid(void) {
    bool result = gpio_set(GPIO_SIGNAL_COUNT); // poza zakresem
    assert(result == false);
}

void test_gpio_set_valid_relay(void) {
    bool result = gpio_set(GPIO_SIGNAL_RELAY);
    assert(result == true);
}

void test_gpio_set_valid_fullsize(void) {
    bool result = gpio_set(sizeof(GpioSignal_t)-1);
    assert(result == false);
}

void test_gpio_set_invalid_fullsize(void) {
    bool result = gpio_set(sizeof(GpioSignal_t));
    assert(result == false);
}

void test_gpio_set_invalid_fullsizeone(void) {
    bool result = gpio_set(sizeof(GpioSignal_t)+1);
    assert(result == false);
}

void test_gpio_set_invalid_dummmy(void) {
    bool result = gpio_set(7655);
    assert(result == false);
}

void test_gpio_clear_valid(void) {
    bool result = gpio_clear(GPIO_SIGNAL_RELAY);
    assert(result == true);
}

void test_gpio_clear_invalid(void) {
    bool result = gpio_clear(GPIO_SIGNAL_COUNT); // poza zakresem
    assert(result == false);
}