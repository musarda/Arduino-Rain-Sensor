# Arduino-Rain-Sensor
A Rain Sensor Can Be Made Easily With Arduino. You can make it yourself using the following materials

This Content Also Has A YouTube Video! Don't Forget to Watch! [Code Chain](https://www.youtube.com/@CodeChain)

# What is a Rain Sensor? How does it work?

Rain sensor is a type of sensor used in shallow water levels and rainy conditions. The sensor we will use in this project can measure up to 40 mm water level. In the structure of the rain sensor, there are conductor lines connected parallel to each other. When these lines come into contact with water, it sends an analog signal to the Arduino. Apart from Arduino, it also works with many microcontrollers.

# Water Level / Rain Sensor Features
> Technicial Specifications

Features | Outputs 
--- | --- 
**Operating voltage** | 5V 
**Working Current** | <20mA
**Product Dimensions** | 65x20x8mm
**Sensor Reading Area** | 40x16mm

# Water Level / Rain Sensor Connections

<img src="https://github.com/musarda/Arduino-Rain-Sensor/blob/main/img/rain_sensor.png" title="Water Level / Rain Sensor" alt="Water Level / Rain Sensor" width="400">

- **GND** : It must be connected to Arduino grounds.
- **VCC** : It is the Water Level / Rain Sensor power supply that we connect the 5V pin to the Arduino.
- **DATA** : Where We Get Analog Output.

# Necessary materials
* 1x Arduino UNO
* 1x Breadboard
* 1x Buzzer
* 1x Water Level / Rain Sensor
* 1x 330Ω Resistance
* Jumper cable

# Connection Diagram

![Circuit_Diagram](https://github.com/musarda/Arduino-Rain-Sensor/blob/main/img/rain_sensor.jpg)

> Connect the VCC pin to the 5V pin on the Arduino and the GND pin to the Ground pin on the Arduino as seen in the circuit diagram above. Connect data pin to A0 pin of Arduino Connect VCC pin of Buzzer to digital pin 8 on arduino
