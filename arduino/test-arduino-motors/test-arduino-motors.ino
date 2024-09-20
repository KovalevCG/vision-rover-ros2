// Define motor control pins
// Motor A
const int IN1 = 8;    // IN1 on the L298N
const int IN2 = 9;    // IN2 on the L298N
const int ENA = 3;    // ENA (Enable A) on the L298N (PWM pin)

// Motor B
const int IN3 = 10;   // IN3 on the L298N
const int IN4 = 11;   // IN4 on the L298N
const int ENB = 5;   // ENB (Enable B) on the L298N (PWM pin)

void setup() {
  // Set all the motor control pins as outputs
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
  
  // Initialize both motors as off
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}

void loop() {
  // Move both motors forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 100);   // Set speed for Motor A

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 100);   // Set speed for Motor B

  delay(1000);             // Move forward for 2 seconds

  // Stop both motors
  analogWrite(ENA, 0);     // Stop Motor A
  analogWrite(ENB, 0);     // Stop Motor B
  delay(5000);             // Pause for 1 second

  // Move both motors backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 100);   // Set speed for Motor A

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 100);   // Set speed for Motor B

  delay(1000);             // Move backward for 2 seconds

  // Stop both motors
  analogWrite(ENA, 0);     // Stop Motor A
  analogWrite(ENB, 0);     // Stop Motor B
  delay(5000);             // Pause for 1 second
}
