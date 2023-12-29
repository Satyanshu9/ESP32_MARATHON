ESP32 SPIFFS Web Server Project

Overview
This project demonstrates the capabilities of the ESP32 microcontroller when combined with the SPIFFS (SPI Flash File System). The ESP32 serves a web interface stored on its SPIFFS, allowing users to control the onboard LED through a toggle button on the web page.

Features
Web Interface: A sleek toggle button interface using HTML & CSS.
SPIFFS Integration: Demonstrates the ability to store and serve web files directly from ESP32's SPIFFS.
LED Control: Allows users to toggle an ESP32's LED using the web interface.

Hardware Requirements
ESP32 Development Board

Software Requirements
Arduino IDE with ESP32 support
Git (for cloning the repository)

Installation & Setup

Clone the repository:
git clone https://github.com/Satyanshu9/ESP32_MARATHON.git

Open the project in Arduino IDE.
Upload the code to the ESP32 board.
Follow the GitHub Process section to upload the web files to the ESP32 SPIFFS.

Usage
After uploading the code and web files, power on the ESP32.
Connect to the ESP32's Wi-Fi network.
Open a web browser and navigate to the ESP32's IP address.
Use the toggle button on the web page to control the ESP32's LED.
Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

License
MIT
