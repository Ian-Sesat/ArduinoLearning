int redLED=8;
int yellowLED=9;
int greenLED=10;
int dit=250;
int dah=500;
int longW=1500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(greenLED,OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);


 digitalWrite(yellowLED,HIGH);
 delay(dah);
 digitalWrite(yellowLED,LOW);
 delay(dah);
  digitalWrite(yellowLED,HIGH);
 delay(dah);
 digitalWrite(yellowLED,LOW);
 delay(dah);
  digitalWrite(yellowLED,HIGH);
 delay(dah);
 digitalWrite(yellowLED,LOW);
 delay(dah);
  digitalWrite(yellowLED,HIGH);
 delay(dah);
 digitalWrite(yellowLED,LOW);
 delay(dah);
  digitalWrite(yellowLED,HIGH);
 delay(dah);
 digitalWrite(yellowLED,LOW);
 delay(dah);
  

digitalWrite(greenLED,HIGH);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);



delay(longW);
}
