# avr-uno-DUAL-pin-change-interrupt

 ## INTERRPUT PINS FROM SAME GROUP
 This code is a demonstration when two interrupt pins from same interrupt
 pin group is being used. The idea is to create a checker in which it
 detects which specific interrupt  pin# activated and runs specific code.
 in the interrupt vector for that interrupt pin.

 In this case, PIN8 and PIN9 are used as interrupt pins both from GROUP 0.
 While PIN10 and PIN13 are used as OUTPUTS, external and built-in LED.
 
 For more information consult the ATMega328p datasheet page 56-57.
 
 ## How to upload the code:
### A. Through Arduino IDE
       1. Copy main.c content as text
       2. Paste it to an empty Arduino sketch
       3. Connect Arduino-Uno through USB
       4. Upload code through the button
    
       
### B. Command line
       1. Make sure you have AVR-GCC toolchain installed, this include GNU-Make and AVRDude.
       2. The only files you are going to need for this method are "main.c" and "Makefile"
       3. Simply open CMD or terminal with its directory set to the location in which you
          have both of those files in.
       4. Type "make" as a command without the quotes.
       5. Makefile automates the process.

