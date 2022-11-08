int latchPin=11;
int dataPin=12;
int clockPin=9;
int wait=100;
byte LED=0x00;
void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(LED);
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,LED);
digitalWrite(latchPin,HIGH);
delay(wait);
LED=LED+1;
if(LED==255){
  LED=0;
  }
}
