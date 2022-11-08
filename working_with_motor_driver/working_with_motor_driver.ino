//working with the l298N motor driver
int analogPin = A3;
float pwm;
int readVal;
int enB = 9;
int in3 = 8;
int in4 = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(analogPin);
  pwm =  map(readVal,0,1023,0,255);
  //pwm = (255. / 1023.) * readVal;
  Serial.println(pwm);
  analogWrite(enB, pwm);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);


}
