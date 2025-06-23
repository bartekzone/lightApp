#include "Rte_LightsControl.h"
#include "Gpio.h"
#include "ErrorHandler.h"

void Rte_TurnOnLed(void) {
    if (!gpio_set(GPIO_SIGNAL_LED)) {
        Error_Report(ERROR_GPIO_FAILURE);
    }
}

void Rte_TurnOffRelay(void) {
    if (!gpio_clear(GPIO_SIGNAL_RELAY)) {
        Error_Report(ERROR_GPIO_FAILURE);
    }
}