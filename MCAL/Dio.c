//*********************  Mcal/Dio.c  *********************//
//interfejs MCAL (HAL) bezpośrednia obsługa sprzętu.
#include "Dio.h"
#include <stdio.h>

void Dio_Write(uint8_t pin, bool state) {
    printf("DIO: pin %d -> %s\n", pin, state ? "HIGH" : "LOW");
}