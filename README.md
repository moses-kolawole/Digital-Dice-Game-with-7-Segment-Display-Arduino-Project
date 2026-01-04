# Digital Dice Game with 7-Segment Display – Arduino Project

## Overview
This project simulates a digital dice using an Arduino, a button, indicator LEDs, and a 7-segment display. Pressing the button triggers a dice roll, displaying a random number from 1 to 6 on the 7-segment display.

## Objective
- Learn to read button inputs using Arduino
- Generate random numbers in a defined range
- Display numbers on a 7-segment LED display
- Understand timing sequences with multiple LEDs
- Gain experience with integrating input and output devices

## Components Used
- Arduino Uno
- 1-Digit 7-Segment Display
- LEDs × 3 (for roll indicators)
- 220Ω resistors × 10
- Breadboard
- Jumper wires
- Push button
- 9V Battery
- 9V Battery Clip to DC Barrel Jack

## Circuit Diagram
![Circuit Diagram](images/digital_dice_game_photo11.jpg)

check out other images [click here](image/)

## How It Works
1. The push button is connected to an analog pin (`A0`) configured as an input.  
2. When the button is pressed, the Arduino triggers a sequence of three indicator LEDs (`indicator1`, `indicator2`, `indicator3`) to simulate rolling.  
3. After the sequence, a random number between 1 and 6 is generated using the `random()` function.  
4. The corresponding number is displayed on the 7-segment display by turning on the correct segments for that number.  
5. The display remains on until the button is pressed again for the next roll.  
6. Timing delays create visible LED sequences and smooth dice roll simulation.

## Code
The Arduino sketch for this project is located in the [code/ directory](code/digital_dice_game_7_project_on_11th_November_2025.ino
).

## Demo Video
A demonstration video showing the working project is included in this repository.

📹 **Project Demonstration:**  
[Click here to watch/download the demo video](video/)

*(If the video does not preview directly on GitHub, please download it using the link above.)*

## Reflection (What I Learned)
- How to read and respond to push button input  
- Generating random numbers with Arduino  
- Displaying numbers on a 7-segment LED display  
- Sequencing multiple LEDs to simulate dice roll animation  

## Challenges Faced
- Coordinating indicator LED sequence with random number generation  
- Mapping numbers correctly to the 7-segment display segments  
- Ensuring button presses are detected reliably without bouncing  

## Possible Improvements
- Implement button debouncing for more reliable input  
- Add multiple dice displays for multiplayer simulation  
- Include sound or buzzer feedback on each roll  

## Project Status
Completed
