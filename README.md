# Ultrasonic Distance Measurement

This project uses an Arduino and an HC-SR04 ultrasonic sensor to measure distances.  
If an object comes closer than 10 cm, the LED turns on as a warning signal.

## Components
- Arduino
- HC-SR04 Ultrasonic Sensor
- LED
- Breadboard
- Jumper wires

## Code
The code calculates distance using the HC-SR04 sensor and activates the LED based on the distance.

**How it works:**
- The sensor sends ultrasonic waves and calculates the time taken for the echo to return.
- Distance is calculated using the formula: `Distance = (duration * 0.034) / 2`.
- If the distance is less than 10 cm, the LED lights up.

## Usage
Upload the code to your Arduino, and connect the components as per the wiring diagram.
