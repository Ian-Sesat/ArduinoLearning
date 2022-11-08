byte myByte=0x00;
int wait=1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  myByte=myByte+1;
  Serial.print(myByte,DEC);
  Serial.print("     ");
  Serial.print(myByte,BIN);
  Serial.print("     ");
  Serial.println(myByte,HEX);
  delay(wait);
  myByte=myByte+myByte;

}
