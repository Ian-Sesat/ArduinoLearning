

int ledpin=11;


void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledpin,HIGH);
delay(1000);
Serial.println("ON");
digitalWrite(ledpin,LOW);
delay(1000);
Serial.println("OFF");
}
