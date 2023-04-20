# Environmental-Monitoring-
Environmental Monitoring System with SVD and Machine Learning
Introduction

This project aims to create an environmental monitoring system that collects data from different environmental parameters, transmits the data wirelessly, analyzes the data using SVD and machine learning algorithms, and displays the results in real-time. The system consists of two Arduino boards, sensors, and wireless communication modules.

Materials

Arduino Uno board
Arduino Mega board
APC220 v3 wireless communication modules
Temperature and humidity module
Photo-resistor module
Water level sensor
DS-1307 RTC module
LCD1602 module
MicroSD card
Breadboard
Jumper wires
Methodology

The system is divided into three main parts: data collection, data transmission, and data analysis. The Arduino Uno board is used as the sensor node, while the Arduino Mega board is used as the receiver node.

Data collection
The sensor node is equipped with temperature and humidity module, photo-resistor module, and water level sensor. The DS-1307 RTC module is used to timestamp the data. The sensor data is collected at a fixed interval and stored in the EEPROM memory of the Arduino Uno board.

Data transmission
The APC220 v3 wireless communication modules are used to transmit the data from the sensor node to the receiver node. The data is transmitted wirelessly using the serial communication protocol. The receiver node is connected to a computer via USB cable.

Data analysis
Once the data is received by the receiver node, it is stored in the microSD card. The data is then analyzed using SVD to reduce the dimensionality of the data and extract the most important features. Machine learning algorithms, such as k-means clustering and support vector machines (SVMs), are used to analyze the data and detect trends or anomalies.

Data visualization
The analyzed data is displayed on the LCD1602 module in real-time. A processing software is used to create a graphical user interface (GUI) that displays the data in a more intuitive and interactive way.

Results

The system successfully collects data from different environmental parameters, transmits the data wirelessly, analyzes the data using SVD and machine learning algorithms, and displays the results in real-time. The data visualization helps to interpret the results and identify trends or anomalies in the data.

Conclusion

The environmental monitoring system with SVD and machine learning is a useful tool for analyzing and interpreting data from different environmental parameters. The system can be further improved by adding more sensors and expanding the data analysis capabilities.

References

Arduino. (n.d.). Arduino Home. Retrieved from https://www.arduino.cc/
PySerial. (n.d.). PySerial Documentation. Retrieved from https://pyserial.readthedocs.io/en/latest/
