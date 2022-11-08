int analogPin=A0;
int redPin=8;
int potVal;
 void setup()
 {
 pinMode(analogPin,INPUT);
 pinMode(redPin,OUTPUT);
 Serial.begin(9600);
  
  }

  void loop()
  {
  
    potVal=analogRead(analogPin);
    Serial.println(potVal);
    while(potVal>=1000)
    {
      digitalWrite(redPin,HIGH);
      potVal=analogRead(analogPin);
      Serial.println(potVal);
      }
    digitalWrite(redPin,LOW);
    }

  
