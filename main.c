/******************************************************************************
main app 
*******************************************************************************/
#include "Swc_LightsControl.h"
#include <stdlib.h>
#include <stdio.h>

// Callback example
typedef void (*LightCallback)(void);
// Funkcja zapalająca światło i informująca kogoś
void turnOnLight(LightCallback callback)
{
    Swc_Lights_TurnOnLed();
    printf("Light turned on\n");

    if (callback != NULL)
        callback();  // wywołaj reakcję
}

// Implementacja reakcji
void onLightTurnedOn() {
    printf(">> User has been notified that light is on.\n");
}
int main(void) {

    Swc_Lights_TurnOnLed();
    Swc_Lights_TurnOffRelay();
    turnOnLight(onLightTurnedOn);
    return 0;
}