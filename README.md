# Arduino 7-Segment Counter

A simple Arduino project that continuously counts from 0 to 9 and displays the number on a dual-digit 7-segment LED display (UE-542).

## Hardware Required
- Arduino Uno (or compatible)
- UE-542 Dual Digit 7-Segment Display (Common Anode)
- 2 × 220Ω Resistors
- Breadboard and Jumper wires

## Circuit Connections

| Segment / Pin       | Arduino Pin     |
|---------------------|-----------------|
| a                   | 6               |
| b                   | 5               |
| c                   | 4               |
| d                   | 3               |
| e                   | 2               |
| f                   | 7               |
| g                   | 8               |
| Digit 1 (Left)      | 10 (via 220Ω)   |
| Digit 2 (Right)     | 11 (via 220Ω)   |

## How to Use
1. Connect the circuit as shown above.
2. Upload the arduino_code file to your Arduino.
3. The display will start counting from 0 to 9 repeatedly.

## Features
- Multiplexed dual-digit display
- Clean and stable counting
- Easy to modify speed

## Author
Ratan Kumar
