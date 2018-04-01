#include <Arduino.h>
#include <ArduinoJson.h>
#include <ArduinoOTA.h>
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <FS.h>
#include <FSWebServerLib.h>
#include <Hash.h>
#include <NtpClientLib.h>
#include <Ticker.h>
#include <TimeLib.h>
#include <WiFiClient.h>

void setup() {
  // WiFi is started inside library
  SPIFFS.begin(); // Not really needed, checked inside library and started if
                  // needed
  ESPHTTPServer.begin(&SPIFFS);
  /* add setup code here */
}

void loop() {
  /* add main program code here */

  // DO NOT REMOVE. Attend OTA update from Arduino IDE
  ESPHTTPServer.handle();
}
