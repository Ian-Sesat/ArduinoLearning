
#include <Servo.h>
Servo myServo ; 
int servoPin=9;
void setup() {
  // put your setup code here, to run once:
 
  myServo.attach(servoPin);
myServo.write(0);
}

void loop() {

}
