#include "Swc_LightsControl.h"
#include "Rte_LightsControl.h"

void Swc_Lights_TurnOnLed(void) {
    Rte_TurnOnLed();
}

void Swc_Lights_TurnOffRelay(void) {
    Rte_TurnOffRelay();
}