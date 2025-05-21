#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    printf("Starting....");
    gpio_set_direction(GPIO_NUM_22, GPIO_MODE_INPUT);
    gpio_set_pull_mode(GPIO_NUM_22, GPIO_PULLUP_ONLY);

    gpio_set_direction(GPIO_NUM_21, GPIO_MODE_OUTPUT);
    bool relayOn = false;
    while (true)
    {
        if (relayOn)
        {
            gpio_set_level(GPIO_NUM_21, 0);
            printf("Turn off");
        }
        else
        {
            gpio_set_level(GPIO_NUM_21, 1);
            printf("Turn on");
        }
        relayOn = !relayOn;

        vTaskDelay(1000);
    }
}
