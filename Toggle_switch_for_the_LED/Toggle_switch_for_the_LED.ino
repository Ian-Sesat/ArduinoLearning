int redPin=10;
int digitalPin=8;
int buttonNew;
int buttonOld=1;
int wait=100;
int ledState=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(1000000);
  pinMode(redPin,OUTPUT);
  pinMode(digitalPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 buttonNew=digitalRead(digitalPin);
  Serial.println(buttonNew);;
  if(buttonOld==1 && buttonNew==0)
  {
    if(ledState==0){
      digitalWrite(redPin,HIGH);
      ledState=1;
      }
    else{
      digitalWrite(redPin,LOW);
      ledState=0;
      }

    }
      buttonOld=buttonNew;
      delay(wait);
}
