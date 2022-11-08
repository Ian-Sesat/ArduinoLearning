int analogPin=A0;
int photoValue;
int wait=250;
int greenPin=8;
int redPin=9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(1000000);
pinMode(analogPin,INPUT);
pinMode(greenPin,OUTPUT);
pinMode(redPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  photoValue=analogRead(analogPin);
  Serial.println(photoValue);
 if (photoValue>90)
 {
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  }
  if (photoValue<90){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  }
  delay(wait);
}
