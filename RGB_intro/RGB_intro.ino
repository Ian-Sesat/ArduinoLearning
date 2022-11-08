int redPin=9;
int greenPin=10;
int bluePin=11;
String msg="WHAT COLOUR DO YOU WANT";
String myColour;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(1000000);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() ==0){
    }
myColour=Serial.readString();
if (myColour=="red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW); 
  }

  if (myColour=="green"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW); 
  }

  if (myColour=="blue"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH); 
  }
  if (myColour=="aqua"){
  digitalWrite(redPin,LOW);
  analogWrite(greenPin,255);
  analogWrite(bluePin,80); 
  }

  if (myColour=="orange"){
  analogWrite(redPin,255);
  analogWrite(greenPin,125);
  digitalWrite(bluePin,LOW); 
  }
}
