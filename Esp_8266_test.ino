void setup() {
  // Begin Serial Communication with Arduino IDE
  Serial.begin(115200);

  // Begin Serial Communication with ESP8266
  Serial1.begin(115200); // Default baud rate for most ESP8266 modules
  delay(2000);

  // Send AT command to check communication
  Serial1.println("AT");
   String ssid = "xxxxxxxx";      // Replace with your Wi-Fi SSID
  String password = "xxxxxxx";  // Replace with your Wi-Fi password
  Serial1.println("AT+CWJAP=\"" + ssid + "\",\"" + password + "\""); // Connect to Wi-Fi
  delay(2000);  // Wait for the connection attempt

}

void loop() {
  // Forward data between ESP8266 and Serial Monitor
  if (Serial1.available()) {
    Serial.write(Serial1.read());
  }
  if (Serial.available()) {
    Serial1.write(Serial.read());
  }
}
