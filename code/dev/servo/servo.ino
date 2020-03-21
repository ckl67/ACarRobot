#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
}

void loop() {
    myservo.write(0);       

  for (pos = 0; pos <= 40; pos += 1) { 
    myservo.write(pos);       
    delay(15);                
  }
  for (pos = 40; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}
