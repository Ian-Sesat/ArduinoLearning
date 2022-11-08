int buttonPin1=9;
int buttonPin2=10;
int redPin=11;
int wait=100;
int buzzPin=2;
int buttonVal1;
int buttonVal2;
int ledBright=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(1000000);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1=digitalRead(buttonPin1);
  buttonVal2=digitalRead(buttonPin2);
  Serial.print("button value 1= ");
  Serial.print(buttonVal1);
  Serial.print("       ");
    Serial.print("button value 2= ");
  Serial.println(buttonVal2);
 
  if (buttonVal1 == 0){
    ledBright=ledBright+20;
    }
    if (buttonVal2 ==0)
    {
      ledBright=ledBright-20;
      }

    if(ledBright>255){
      ledBright=255;
      digitalWrite(buzzPin,HIGH);
      delay(wait);
      digitalWrite(buzzPin,LOW);
      }
          if(ledBright<0){
      ledBright=0;
      digitalWrite(buzzPin,HIGH);
      delay(wait);
      digitalWrite(buzzPin,LOW);
      }
   Serial.println(ledBright);
  analogWrite(redPin,ledBright);
delay(wait);
}
