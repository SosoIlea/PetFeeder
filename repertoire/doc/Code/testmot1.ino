  
const int dirPin = 4;  // Direction
const int stepPin = 5; // Step
const int enable=6;

 
// Motor steps per rotation
const int STEPS_PER_REV = 100;
 
void setup() {
  
  // Setup the pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  digitalWrite(enable,LOW); // Set Enable low
}
void loop() { 
  // Set motor direction counterclockwise
  digitalWrite(dirPin,LOW);
  
  // Spin motor two rotations quickly
  for(int x = 0; x < (STEPS_PER_REV * 4); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(800); //plus on reduit le temps plus ca tourne vite
    digitalWrite(stepPin,LOW);
    delayMicroseconds(800);
  }
  digitalWrite(dirPin,HIGH);
  
  // Spin motor two rotations quickly
  for(int x = 0; x < (STEPS_PER_REV * 2); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(800);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(800);
  }
  digitalWrite(enable,HIGH); // Set Enable low
 digitalWrite(stepPin,LOW);//OU HIGH
  // Pause for one second
  delay(1000);
}
