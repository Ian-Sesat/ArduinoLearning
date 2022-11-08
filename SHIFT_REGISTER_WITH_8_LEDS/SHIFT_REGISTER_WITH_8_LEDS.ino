
int dataPin=12;
int latchPin=11;
int clockPin=9;
byte LED1=0b01010101;
byte LED2=0b10101010;
int wait=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(latchPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LED1);
  digitalWrite(latchPin,HIGH);
  delay(wait);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LED2);
  digitalWrite(latchPin,HIGH);
  delay(wait);

}
