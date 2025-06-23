//********************* Mcal/Dio.h  *********************//
//interfejs MCAL (HAL) bezpośrednia obsługa sprzętu.
#ifndef DIO_H
#define DIO_H

#include <stdbool.h>
#include <stdint.h>

void Dio_Write(uint8_t pin, bool state);

#endif