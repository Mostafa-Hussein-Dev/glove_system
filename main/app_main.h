#ifndef APP_MAIN_H
#define APP_MAIN_H

#include "esp_err.h"
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"
#include "freertos/event_groups.h"

/* Forward declarations of data structures */
typedef struct sensor_data_s sensor_data_t;
typedef struct processing_result_s processing_result_t;
typedef struct output_command_s output_command_t;
typedef struct system_command_s system_command_t;

/* Global queue handlers */
extern QueueHandle_t g_sensor_data_queue;
extern QueueHandle_t g_processing_result_queue;
extern QueueHandle_t g_output_command_queue;
extern QueueHandle_t g_system_command_queue;

/* Event group for system synchronization */
extern EventGroupHandle_t g_system_event_group;

/* Event bits */
#define SYSTEM_EVENT_INIT_COMPLETE      (1 << 0)
#define SYSTEM_EVENT_SENSOR_READY       (1 << 1)
#define SYSTEM_EVENT_PROCESSING_READY   (1 << 2)
#define SYSTEM_EVENT_OUTPUT_READY       (1 << 3)
#define SYSTEM_EVENT_BLE_READY          (1 << 4)
#define SYSTEM_EVENT_CALIBRATION_NEEDED (1 << 5)
#define SYSTEM_EVENT_ERROR              (1 << 6)
#define SYSTEM_EVENT_LOW_BATTERY        (1 << 7)

/**
 * @brief Initialize the application
 * 
 * This function initializes all subsystems, creates queues and tasks
 * and starts the system.
 * 
 * @return ESP_OK on success, or an error code on failure
 */
esp_err_t app_init(void);

#endif /* APP_MAIN_H */