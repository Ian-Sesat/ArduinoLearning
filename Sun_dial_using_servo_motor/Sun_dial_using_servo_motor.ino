#include <Servo.h>
int photoVal;
int analogPin=A0;
int servoPin=9;
int servoPosition;
Servo myServo;
int wait=100;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(1000000);
pinMode(analogPin,INPUT);
pinMode(servoPin,OUTPUT);
myServo.attach(servoPin);


}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal=analogRead(analogPin);
  servoPosition=3*photoVal-6;
  Serial.println(servoPosition);
  myServo.write(servoPosition);
  delay(wait);
}
