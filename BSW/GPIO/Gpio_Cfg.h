//*********************  Gpio/Gpio_Cfg.h  *********************//
//  warstwa abstrakcji (kieruje wywlania do HAL/MCAL)

#ifndef GPIO_CFG_H
#define GPIO_CFG_H

#include <stdint.h>
#include <stdbool.h>

typedef enum {
    GPIO_SIGNAL_LED,
    GPIO_SIGNAL_RELAY,
    GPIO_SIGNAL_COUNT
} GpioSignal_t;

extern const uint8_t gpio_pin_map[];

#endif