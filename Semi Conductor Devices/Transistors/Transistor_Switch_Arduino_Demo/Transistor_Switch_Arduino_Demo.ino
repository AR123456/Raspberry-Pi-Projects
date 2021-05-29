int motorPin = 0;

void setup() {
  pinMode(motorPin, OUTPUT); // sets the digital pin as output
}

void loop() {
  digitalWrite(motorPin, HIGH);   // sets the LED on
  delay(1000);                  // waits for a second
  digitalWrite(motorPin, LOW);    // sets the LED off
  delay(1000);                  // waits for a second
}
