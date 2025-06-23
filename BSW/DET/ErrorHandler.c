//*********************  Error/ErrorHandler.c  *********************//
// DET — Development Error Tracer obsluga bledow

#include "ErrorHandler.h"
#include <stdio.h>

void Error_Report(ErrorCode_t code) {
    switch(code) {
        case ERROR_GPIO_FAILURE:
            printf("[ERROR] GPIO failure\n");
            break;
        default:
            printf("[ERROR] Unknown error\n");
    }
}