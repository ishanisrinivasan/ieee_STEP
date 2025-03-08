STEP: See The End Point

A precision line detector for sports including but not limited to: Basketball, Pickleball, Volleyball, etc.

Components Needed
1. Arduino or any microcontroller
2. Shunt Resistor (e.g., 10Ω, 5W or 1Ω, 5W)
3. Velostat
4. Conductive tape/film
5. Electrical Tape
6. Breadboard
7. Wires
8. LED

How To Build Pressure Sensor
1. Make long strips of velostat dependant on the size of your court.
2. Make 2 long strips of conductive tape of the same length as the velostat but smaller width for each velostat strip.
3. Sandwich the velostat between 2 strips of conductive tape, making sure the conductive tape doesn't touch.
4. Tape around the sensor to keep the strips in place.

Step-by-Step Wiring Instructions
1. Place the shunt resistor on the breadboard.
	- If using a 10Ω resistor, it will measure small currents (0-500mA).
	- If using a 1Ω resistor, it will measure larger currents (0-5A).

2. Connect one end of the shunt resistor to GND on Arduino.

3. Connect the other end of the shunt resistor to one of the pressure sensor’s sides.

4. Connect the other side of the pressure sensor to the Arduino's 5V pin.

5. Connect the midpoint (between the sensor and shunt resistor) to A0 on Arduino
	- This allows Arduino to measure the voltage drop across the shunt resistor.

6. Add an LED Indicator
	- Connect LED’s anode (+) to pin 9 on Arduino.
	- Connect LED’s cathode (-) to GND with a 330Ω resistor.

Wiring Diagram

       +5V (Arduino)
           |
           | 
    [ Pressure Sensor ]
           |
           |--------------> A0 (Arduino - Reads Voltage)
           |
    [ Shunt Resistor ] (1Ω or 10Ω)
           |
          GND (Arduino)

    LED Indicator:
    ----------------
    Pin 9 (Arduino) ---> [ 330Ω Resistor ] ---> [ LED (Anode +) ]
                                              |
                                              GND (LED Cathode -)
