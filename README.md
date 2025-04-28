# ESP-01S Testing via Arduino Mega (Hardware Serial1)

This project demonstrates how to test the **ESP-01S Wi-Fi module** using an **Arduino Mega** through the **Hardware Serial1** interface. The Arduino Mega's Serial1 (pins 18 and 19) is used for direct communication with the ESP-01S, allowing reliable serial testing without software serial complications.

The code establishes a basic communication channel to verify that the ESP-01S responds correctly to AT commands or custom firmware messages.

## Features

- Direct hardware serial communication between Arduino Mega and ESP-01S
- Testing AT command responses
- Verifying Wi-Fi module functionality
- Simplified and stable serial connection compared to SoftwareSerial

##  Project Files

- `Esp_8266_test.ino` – Arduino sketch with sensor reading and LED logic
-  `Wiring Diagram`
- `README.md` – This documentation file

## Hardware Used

- Arduino Mega 2560
- ESP-01S Wi-Fi module
- Trimmer Potentiometer
- Jumper wires

**Note:** Ensure that the ESP-01S receives a stable 3.3V supply and is not directly connected to 5V logic levels on RX.

## How It Works

- Arduino Mega sends test data or AT commands over Serial1.
- ESP-01S responds with acknowledgment or results.
- This setup is useful for verifying that the ESP module is functional before using it in larger projects.

---

Feel free to fork this project or suggest improvements.
