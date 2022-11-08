
String msg="Which LED do you want to be on?";
int redPin=8;
int greenPin=9;
int yellowPin=10;
String LEDpin;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){
    }
   LEDpin=Serial.readString();
  if (LEDpin=="red")
  {digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,LOW);
    
    }

      if (LEDpin=="green")
  {digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellowPin,LOW);
    
    }

      if (LEDpin=="yellow")
  {digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,HIGH);
    
    }
}
