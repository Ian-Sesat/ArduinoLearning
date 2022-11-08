

int ledpin=7,motion=A7;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(motion,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sesat=digitalRead(motion);
Serial.println(sesat);
if(sesat==HIGH)
{
  digitalWrite(ledpin,HIGH);
  Serial.println("ON");
  
  }
else
{
  digitalWrite(ledpin,LOW);
  Serial.println("OFF");
  }
}
