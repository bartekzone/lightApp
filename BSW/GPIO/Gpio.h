//*********************  Gpio/Gpio.h  *********************//
//  warstwa abstrakcji (kieruje wywlania do HAL/MCAL)
#ifndef GPIO_H
#define GPIO_H

#include <stdbool.h>
#include <stdint.h>
#include "Gpio_Cfg.h"

bool gpio_set(GpioSignal_t signal);
bool gpio_clear(GpioSignal_t signal);

#endif // GPIO_H