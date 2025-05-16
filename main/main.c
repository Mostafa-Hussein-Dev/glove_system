#include <stdio.h>
#include "esp_log.h"
#include "esp_system.h"
#include "app_main.h"

static const char *TAG = "MAIN";

void app_main(void)
{
    ESP_LOGI(TAG, "Sign Language Translation Glove starting...");
    
    // Initialize the application
    esp_err_t ret = app_init();
    if (ret != ESP_OK) {
        ESP_LOGE(TAG, "Application initialization failed! Error: %s", esp_err_to_name(ret));
        return;
    }
    
    ESP_LOGI(TAG, "Application initialized successfully, system running");
    
    // Main application code runs in FreeRTOS tasks
    // No need for further code here as all functionality is handled by tasks
    
    // Main thread can be used for monitoring if needed
    while (1) {
        // Periodic system checks could be done here, but we'll leave it empty
        // as all functionality is in the tasks
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
}