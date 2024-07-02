/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "esp_timer.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_panel_rgb.h"
#include "driver/gpio.h"
#include "esp_err.h"
#include "esp_log.h"
#include "lvgl.h"
#include "lv_examples.h"

#include "Vernon_ST7701S/ST7701S.h"

static const char *TAG = "example";



//Custom Var
#define SPI_RESET 19 // 34
#define SPI_SDA 1  // 37
#define SPI_SCL 12 // 36
#define SPI_CS  18 // 35


void app_main(void)
{
    Vernon_ST7701S_handle vernon_st7701s = ST7701S_newObject(SPI_SDA, SPI_SCL, SPI_CS, SPI2_HOST, SPI_METHOD);
    ST7701S_screen_init(vernon_st7701s, 8);
    ESP_LOGI(TAG, "Init code rgb screen");

}
