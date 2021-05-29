int motorPinR = 0; // control pin for RIGHT side
int motorPinL = 1; // control pin for LEFT side

void setup() {
  // set the digital pins as outputs
  pinMode(motorPinR, OUTPUT);
  pinMode(motorPinL, OUTPUT);
}

void loop() {
  // Turn both sides off & wait 1 second
  digitalWrite(motorPinR, LOW);
  digitalWrite(motorPinL, LOW);
  delay(1000);

  // Turn only right side on & wait 1 second
  digitalWrite(motorPinR, HIGH);
  digitalWrite(motorPinL, LOW);
  delay(1000);

  // Turn both sides on & wait 1 second
  digitalWrite(motorPinR, HIGH);
  digitalWrite(motorPinL, HIGH);
  delay(1000);

  // Turn only left side on & wait 1 second
  digitalWrite(motorPinR, LOW);
  digitalWrite(motorPinL, HIGH);
  delay(1000);
}
