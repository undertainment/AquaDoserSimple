#pragma once
class WiFiManager{
public:
 bool begin();
 void loop();
 bool connected() const;
};
