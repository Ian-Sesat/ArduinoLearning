int latchPin=11;
int dataPin=12;
int clockPin=9;
int wait=1000;
byte myByte=0x1F;
byte myByteFlipped;

void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("myByte=");
Serial.println(myByte,HEX);
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,myByte);
digitalWrite(latchPin,HIGH);
delay(wait);
myByteFlipped=255-myByte;
Serial.print("myByte flipped=");
Serial.println(myByteFlipped,HEX);
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,myByteFlipped);
digitalWrite(latchPin,HIGH);
delay(wait);
}
