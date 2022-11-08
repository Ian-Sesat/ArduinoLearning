
int yellowLED=10;
int analogpin=A3;
int potVal;
float LEDval;


void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLED,OUTPUT);
  pinMode(analogpin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(analogpin);
  LEDval=(255./1023.)*potVal;
  Serial.println(LEDval);
  analogWrite(yellowLED,LEDval);

}
