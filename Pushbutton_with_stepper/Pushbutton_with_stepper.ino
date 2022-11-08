#include <Stepper.h>

int stepsPerRevolution=2048;
int wait=200;
int motSpeed=3;
int buttonPin=7;
int buttonValueOld=1; 
int buttonValueNew;
int motDir=1;
 Stepper myStepper(stepsPerRevolution, 8,10,9,11);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(1000000);
  myStepper.setSpeed(motSpeed);
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  
buttonValueNew=digitalRead(buttonPin);
Serial.println(buttonValueNew);

if(buttonValueNew==0 && buttonValueOld==1){
  motDir=motDir*(-1);
  }
myStepper.step(motDir*1);
delay(wait);
buttonValueOld=buttonValueNew;
  
}
