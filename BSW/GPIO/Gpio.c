//*********************  Gpio/Gpio.c  *********************//
//  warstwa abstrakcji (kieruje wywlania do HAL/MCAL)

#include "Gpio.h"
#include "Dio.h"

bool gpio_set(GpioSignal_t signal) {
    if (signal >= GPIO_SIGNAL_COUNT) return false;
    Dio_Write(gpio_pin_map[signal], true);
    return true;
}

bool gpio_clear(GpioSignal_t signal) {
    if (signal >= GPIO_SIGNAL_COUNT) return false;
    Dio_Write(gpio_pin_map[signal], false);
    return true;
}