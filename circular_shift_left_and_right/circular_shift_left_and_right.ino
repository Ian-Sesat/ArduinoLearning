int latchPin=11;
int dataPin=12;
int clockPin=9;
int wait=1000;
byte myByte=0b10000000;

void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(myByte);
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,myByte);
digitalWrite(latchPin,HIGH);
delay(wait);
myByte=myByte*128+myByte/2;
}
