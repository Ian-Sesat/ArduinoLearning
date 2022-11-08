
int yellowLED=6;
int redLED=9;
int redTime=500;
int  yellowTime=500;
int j;
int redBlink=3;
int yellowBlink=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLED,OUTPUT);
  pinMode(redLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (j=1;j<=yellowBlink;j=j+1)
  {
    digitalWrite(yellowLED,HIGH);
    delay(yellowTime);
    digitalWrite(yellowLED,LOW);
    delay(yellowTime);
    
    }
  for (j=1;j<=redBlink;j=j+1)
  {
    digitalWrite(redLED,HIGH);
    delay(redTime);
    digitalWrite(redLED,LOW);
    delay(redTime);
    }
  
  
}
