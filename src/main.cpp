#include <Arduino.h>
#include <DEV_Config.h>
// tft display
#include <SPI.h>
#include <LCD_Driver.h>

void setup()
{
  Config_Init();
  LCD_Init();
  LCD_SetBacklight(1000);
}

void loop()
{
  Serial.println("Hello, World!");
  delay(1000);
}
