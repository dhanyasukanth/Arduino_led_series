// Define the pins for the LEDs
int ledPins[] = {2, 3, 4, 5,6,7,8,9}; // Add or modify pins as needed
int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  // Set up the LED pins as outputs
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Blink the LEDs one after another
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);   // Turn the current LED on
    delay(500);                        // Wait for 500 milliseconds
    digitalWrite(ledPins[i], LOW);    // Turn the current LED off
           // Wait for 500 milliseconds
  }
  for (int i = numLEDs - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
  }
}
