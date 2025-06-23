//*********************  Error/ErrorHandler.h  *********************//
// DET — Development Error Tracer services obsluga bledow

#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

typedef enum {
    ERROR_NONE,
    ERROR_GPIO_FAILURE,
    ERROR_UNKNOWN
} ErrorCode_t;

void Error_Report(ErrorCode_t code);

#endif