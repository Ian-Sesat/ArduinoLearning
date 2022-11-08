int potVal;
float toneVal;
int buzzPin=8;
int analogPin=A2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(1000000);
  pinMode(buzzPin,OUTPUT);
  pinMode(analogPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(analogPin);
toneVal=((9940./1023.)*potVal)+60;
Serial.println(toneVal);
digitalWrite(buzzPin,HIGH);
delayMicroseconds(toneVal);
digitalWrite(buzzPin,LOW);
delayMicroseconds(toneVal);

}
