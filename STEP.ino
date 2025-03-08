const int sensorPin = A0;  // Analog pin to read voltage
const int ledPin = 9;      // Digital pin for LED
const float R_shunt = 10.0;  // Shunt resistor in ohms (10Ω)
const float voltageRef = 5.0; // Assuming 5V reference
float lastCurrent = 0.0;  // Store last measured current
const float threshold = 0.01;  // Current drop threshold in Amps (10mA)

void setup() {
    Serial.begin(9600);  
    pinMode(ledPin, OUTPUT);  
}

void loop() {
    // Read voltage at A0
    float Vout = analogRead(sensorPin) * (voltageRef / 1023.0);

    // Calculate current using Ohm’s Law: I = V / R_shunt
    float current = Vout / R_shunt;

    // Detect sudden current drop
    if ((lastCurrent - current) > threshold) {
        digitalWrite(ledPin, HIGH);  // Turn on LED
        Serial.println("Sudden Drop Detected! LED ON");
    } else {
        digitalWrite(ledPin, LOW);  // Turn off LED
    }

    // Update previous current value
    lastCurrent = current;

    // Print values to Serial Monitor
    Serial.print("Current: ");
    Serial.print(current, 6); // 6 decimal places
    Serial.println(" A"); // Amps

    delay(100); // Small delay to stabilize readings
}
