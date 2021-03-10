//Example script of USB serial

#include "pico/stdlib.h"
#include <stdio.h>
#include "hardware/uart.h"

int main()
{
    stdio_init_all();
    while (true) { 
        printf("Hello World"); 
        sleep_ms(1000);
    }
}