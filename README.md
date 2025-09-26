# Automated Aquafarm Control Using IoT

This project transforms a traditional aquarium into a smart aquafarm using **Arduino, sensors, and automation**.  
It monitors water conditions (temperature, humidity, water level) and controls pumps automatically.  
A Bluetooth module allows remote control, and data is displayed on an LCD screen.

## 🚀 Features
- Monitors temperature & humidity using DHT sensor  
- Displays real-time data on LCD (Temp °C, Humidity %)  
- Water level detection for smart pump control  
- Bluetooth communication for external commands  
- Automated relay switching for water flow control  

## 📂 Project Files
- `aquafarm.ino` → Arduino source code  
- Documentation / PPT (if available)  

## 🛠️ Tech Stack
- Arduino Uno  
- DHT11 Sensor (Temperature & Humidity)  
- Water Level Sensor  
- LCD 16x2 Display  
- Bluetooth HC-05 Module  
- Relays & Motors  

## ⚡ How to Run
1. Open `aquafarm.ino` in Arduino IDE.  
2. Install required libraries: `LiquidCrystal.h`, `dht.h`, `SoftwareSerial.h`.  
3. Connect Arduino with sensors & upload code.  
4. Monitor data via LCD & Bluetooth.  


