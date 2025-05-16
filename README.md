Sign Language Translation Glove Project
This project implements a Sign Language Translation Glove based on the ESP32-S3 platform.

Prerequisites
ESP-IDF v4.4 or later
ESP32-S3 development board
Necessary hardware components (flex sensors, IMU, display, etc.)
Building and Flashing
Clone this repository
Set up ESP-IDF environment variables
. $HOME/esp/esp-idf/export.sh  # Linux/macOS
or
%userprofile%\esp\esp-idf\export.bat  # Windows
Navigate to the project directory
Build the project
idf.py build
Flash the project to your ESP32-S3
idf.py -p PORT flash monitor
Replace PORT with your ESP32-S3's serial port (e.g., COM3 on Windows or /dev/ttyUSB0 on Linux)
Hardware Connections
Refer to the pin_definitions.h file for the GPIO pin assignments. The hardware should be connected according to the circuit design document.

Project Structure
main/: Main application code
config/: Configuration files
core/: Core system modules
drivers/: Hardware drivers
processing/: Data processing algorithms
communication/: BLE communication
output/: Output generation
tasks/: RTOS task definitions
util/: Utility functions
components/: Custom components
ml_inference/: Machine learning interface (placeholder for now)
Features
Real-time sign language gesture recognition
Multiple sensor fusion (flex sensors, IMU, camera)
Output via display, audio, and haptic feedback
Bluetooth connectivity for mobile app integration
Power management for extended battery life
