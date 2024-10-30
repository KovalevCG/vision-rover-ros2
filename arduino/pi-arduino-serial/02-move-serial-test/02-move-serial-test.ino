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

  // Serial communication with Raspberry Pi
  Serial.begin(9600);
  
  // Initialize both motors as off
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 70);
  analogWrite(ENB, 70);
}

void loop() {

  if (Serial.available() > 0) {
    char command = Serial.read();
    switch (command) {
      case 'f':  // Forward
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        analogWrite(ENA, 80);
        analogWrite(ENB, 80);
        break;
      case 'b':  // Backward
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        analogWrite(ENA, 80);
        analogWrite(ENB, 80);
        break;
      case 'l':  // Left turn
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        analogWrite(ENA, 130);
        analogWrite(ENB, 130);
        delay(150);
        analogWrite(ENA, 0);
        analogWrite(ENB, 0);
        break;
      case 'r':  // Right turn
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        analogWrite(ENA, 130);
        analogWrite(ENB, 130);
        delay(150);
        analogWrite(ENA, 0);
        analogWrite(ENB, 0);
        break;
      case 's':  // Stop
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        analogWrite(ENA, 0);
        analogWrite(ENB, 0);
        break;
    }
  }
}

// void gradualStartMove(int maxSpeed) {

//   // Slowly increase speed from 0 to maxSpeed
//   for (int speed = 50; speed <= maxSpeed; speed += 5) {
//     analogWrite(ENA, speed);  // Set PWM for Motor A
//     analogWrite(ENB, speed);  // Set PWM for Motor B
//     delay(15);  // Small delay for gradual acceleration
//   }
// }





  // // Move both motors forward
  // digitalWrite(IN1, HIGH);
  // digitalWrite(IN2, LOW);
  // analogWrite(ENA, 100);   // Set speed for Motor A

  // digitalWrite(IN3, HIGH);
  // digitalWrite(IN4, LOW);
  // analogWrite(ENB, 100);   // Set speed for Motor B

  // delay(1000);             // Move forward for 2 seconds

  // // Stop both motors
  // analogWrite(ENA, 0);     // Stop Motor A
  // analogWrite(ENB, 0);     // Stop Motor B
  // delay(5000);             // Pause for 1 second

  // // Move both motors backward
  // digitalWrite(IN1, LOW);
  // digitalWrite(IN2, HIGH);
  // analogWrite(ENA, 100);   // Set speed for Motor A

  // digitalWrite(IN3, LOW);
  // digitalWrite(IN4, HIGH);
  // analogWrite(ENB, 100);   // Set speed for Motor B

  // delay(1000);             // Move backward for 2 seconds

  // // Stop both motors
  // analogWrite(ENA, 0);     // Stop Motor A
  // analogWrite(ENB, 0);     // Stop Motor B
  // delay(5000);             // Pause for 1 second






// int motor1Pin1 = 3;
// int motor1Pin2 = 4;
// int motor2Pin1 = 5;
// int motor2Pin2 = 6;
// int motorSpeed = 100;  // Adjust speed via PWM if needed

// void setup() {
//   pinMode(motor1Pin1, OUTPUT);
//   pinMode(motor1Pin2, OUTPUT);
//   pinMode(motor2Pin1, OUTPUT);
//   pinMode(motor2Pin2, OUTPUT);
//   Serial.begin(9600);  // Serial communication with Raspberry Pi
// }

// void loop() {
//   if (Serial.available() > 0) {
//     char command = Serial.read();
//     switch (command) {
//       case 'f':  // Forward
//         digitalWrite(motor1Pin1, HIGH);
//         digitalWrite(motor1Pin2, LOW);
//         digitalWrite(motor2Pin1, HIGH);
//         digitalWrite(motor2Pin2, LOW);
//         break;
//       case 'b':  // Backward
//         digitalWrite(motor1Pin1, LOW);
//         digitalWrite(motor1Pin2, HIGH);
//         digitalWrite(motor2Pin1, LOW);
//         digitalWrite(motor2Pin2, HIGH);
//         break;
//       case 'l':  // Left turn
//         digitalWrite(motor1Pin1, LOW);
//         digitalWrite(motor1Pin2, HIGH);
//         digitalWrite(motor2Pin1, HIGH);
//         digitalWrite(motor2Pin2, LOW);
//         break;
//       case 'r':  // Right turn
//         digitalWrite(motor1Pin1, HIGH);
//         digitalWrite(motor1Pin2, LOW);
//         digitalWrite(motor2Pin1, LOW);
//         digitalWrite(motor2Pin2, HIGH);
//         break;
//       case 's':  // Stop
//         digitalWrite(motor1Pin1, LOW);
//         digitalWrite(motor1Pin2, LOW);
//         digitalWrite(motor2Pin1, LOW);
//         digitalWrite(motor2Pin2, LOW);
//         break;
//     }
//   }
// }

