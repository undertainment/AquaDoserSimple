#include "WiFiManager.h"
#include <WiFi.h>
bool WiFiManager::begin(){
  // Build002 framework: AP/STA implementation added in next build.
  return true;
}
void WiFiManager::loop(){}
bool WiFiManager::connected() const{
  return WiFi.status()==WL_CONNECTED;
}
