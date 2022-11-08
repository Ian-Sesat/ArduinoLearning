
int analogpin=A0;
int readvalue;
float V2;
int delaytime=500;



void setup() {
  // put your setup code here, to run once:
  pinMode(analogpin,INPUT);
  Serial.begin(9600);

}

void loop() {
  
  // put your main code here, to run repeatedly:
  readvalue=analogRead(analogpin);
  V2=(5./1023.)*readvalue;
  Serial.println(V2);
  delay(delaytime);

}
