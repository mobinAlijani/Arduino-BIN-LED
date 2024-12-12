How to Run
	1.	Hardware Setup:
	•	Connect each LED to one of the pins defined in the LEDpin array through a 220-ohm resistor.
	•	Connect the other end of the resistors to Arduino digital pins and the LED cathodes to GND.
	2.	Upload the Code:
	•	Open the code in Arduino IDE.
	•	Select the appropriate board and port.
	•	Upload the code to the board.
	3.	Test Functionality:
	•	Open the serial monitor at a baud rate of 115200.
	•	Send a number between 0 and 255.
	•	Each bit of the sent number will control the state of a corresponding LED (ON/OFF).



## 🔧 Requirements

### Hardware:
  -	•	Arduino board (e.g., Uno, Mega, or similar)
  - •	8 LEDs
  -	•	8 resistors (220 ohms)
  -	•	Jumper wires
  
###  Software:
  -	•	Arduino IDE

## 📋 Features:
-	•	Control 8 LEDs individually using a single input number.
-	•	Simplified LED pin management using an array.
-	•	Supports serial communication at a baud rate of 115200.
