int analogpin=A3;
float V2;
int readVal;
int wait=1000;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(analogpin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  delay(wait);

}
