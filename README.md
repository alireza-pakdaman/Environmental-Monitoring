# Environmental Monitoring 

## Introduction
This project aims to create an environmental monitoring system that collects data from different environmental parameters, performs basic processing on the data, displays the results, and stores the data on a Mac for further analysis. The system consists of an Arduino Uno board, sensors, and a USB cable for data transmission.

## Materials
- Arduino Uno board
- Temperature and humidity module
- Photo-resistor module
- Water level sensor
- DS-1307 RTC module
- LCD1602 module
- Breadboard
- Jumper wires
- Mac computer
- Arduino IDE software
- Processing software

## Methodology
The system is divided into four main parts: data collection, data processing, data display, and data storage.

### Data collection
The sensor node is equipped with temperature and humidity module, photo-resistor module, and water level sensor. The DS-1307 RTC module is used to timestamp the data. The sensor data is collected at a fixed interval and stored in the Arduino's memory.

### Data processing
The collected data is processed by the Arduino Uno board. Basic processing, such as averaging, filtering, and normalization, is performed on the data. The processed data is then displayed on the LCD1602 module in real-time.

### Data display
The LCD1602 module is used to display the processed data. The display shows the current value of each environmental parameter being monitored. The display is updated at a fixed interval to show the latest readings.

### Data storage
The processed data is transmitted to the Mac computer via USB cable. The data is stored on the computer using a serial communication protocol. The stored data can be further analyzed using software such as Processing.

## Results
The system successfully collects data from different environmental parameters, performs basic processing on the data, displays the results, and stores the data on a Mac for further analysis. The data display helps to interpret the results and identify trends or anomalies in the data. The stored data can be further analyzed using software such as Processing.

## Conclusion
The environmental monitoring system with basic processing and data storage is a useful tool for analyzing and interpreting data from different environmental parameters. The system can be further improved by adding more sensors and expanding the data analysis capabilities.

## References
- Arduino. (n.d.). Arduino Home. Retrieved from https://www.arduino.cc/
- Processing Foundation. (n.d.). Processing Home. Retrieved from https://processing.org/
