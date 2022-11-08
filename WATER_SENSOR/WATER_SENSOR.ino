
int ledpin=3;
int water=A5;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(water,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int pirvalue=digitalRead(water);
Serial.println(water);
if( water==HIGH)
{
  digitalWrite(ledpin,HIGH);
  Serial.println( "WATERPRESENT");
  
  }
else
{
  
  digitalWrite(ledpin,LOW);
  Serial.println("WATERABSENT");
  }
}
