#include <Arduino.h>
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <SPIFFS.h>

const char* ssid     = "Dattebayo";
const char* password = "UzumakiNaruto";
AsyncWebServer server(80);
const int ledPin = 2; 
void setup() {
  Serial.begin(115200);
 pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); 


  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  Serial.println(WiFi.localIP());

 
  if (!SPIFFS.begin(true)) {
    Serial.println("An error occurred while mounting SPIFFS");
    return;
  }
  Serial.println("SPIFFS mounted successfully");

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/index.html", "text/html");
  });

  server.on("/style.css", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/style.css", "text/css");
  });

  server.on("/toggle", HTTP_GET, [](AsyncWebServerRequest *request){
    digitalWrite(ledPin, !digitalRead(ledPin)); // Toggle the LED state
    request->send(200, "text/plain", "Toggle successful");
  });

  server.begin();
}

void loop() {}
