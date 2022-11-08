int analogPin=A2;
int buzzPin=8;
int wait=2000;

int myNum;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(1000000);
  pinMode(analogPin,INPUT);
  pinMode(buzzPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
myNum=analogRead(analogPin);
Serial.println(myNum);
while(myNum>1000)
{digitalWrite(buzzPin,HIGH);
delay(wait);
myNum=analogRead(analogPin);
Serial.println(myNum); 
  }
  digitalWrite(buzzPin,LOW);
}
