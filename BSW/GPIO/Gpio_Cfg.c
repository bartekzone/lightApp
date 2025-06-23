//*********************  Gpio/Gpio_Cfg.c  *********************//
//  warstwa abstrakcji (kieruje wywlania do HAL/MCAL)

#include "Gpio_Cfg.h"
#include "ProjectConfig.h"

const uint8_t gpio_pin_map[] = {
    #ifdef SUPP1
        [GPIO_SIGNAL_LED] = 3,
        [GPIO_SIGNAL_RELAY]= 5
    #elif defined(SUPP2)
        [GPIO_SIGNAL_LED] = 9,
        [GPIO_SIGNAL_RELAY]= 6
    #else
        #error "No supplier defined (SUPP1 or SUPP2)"
    #endif
};