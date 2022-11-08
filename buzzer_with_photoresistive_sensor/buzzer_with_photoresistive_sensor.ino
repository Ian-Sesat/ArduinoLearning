int analogPin=A3;
int buzzPin=9;
int photoValue;
float toneValue;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(1000000);
  pinMode(analogPin,INPUT);
  pinMode(buzzPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  photoValue=analogRead(analogPin);
  toneValue=(9./550.)*photoValue-25./11.;
  Serial.println(toneValue);
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(toneValue);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(toneValue);

}
