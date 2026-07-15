#include <Arduino.h>

#include "Application.h"
#include "Version.h"
#include "Config.h"

void Application::begin()
{
    Serial.begin(SERIAL_BAUD);

    delay(500);

    Serial.println();
    Serial.println("================================");
    Serial.println(FW_NAME);

    Serial.print("Version: ");
    Serial.println(FW_VERSION);

    Serial.print("Build: ");
    Serial.println(FW_BUILD);

    Serial.println("================================");
}

void Application::loop()
{
}