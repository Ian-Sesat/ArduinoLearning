
int Greenpin=8;
int Yellowpin=9;
int Redpin=10;

int readval;
float V2;
int readpin=A0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Greenpin,OUTPUT);
  pinMode(Yellowpin,OUTPUT);
  pinMode(Redpin,OUTPUT);
  pinMode(readpin,INPUT);

}

void loop() {
  readval=analogRead(readpin);
  V2=(5./1023.)*readval;
  Serial.print("The value of the potentiometer is ");
  Serial.println(V2);
  if (V2<3.0){
    digitalWrite(Greenpin,HIGH);
    digitalWrite(Yellowpin,LOW);
    digitalWrite(Redpin,LOW);
  }
  if (V2>=3.0 && V2<4.0){
    digitalWrite(Greenpin,LOW);
    digitalWrite(Yellowpin,HIGH);
    digitalWrite(Redpin,LOW);    
  }
  if (V2>=4.0 && V2>=5.0){
    digitalWrite(Greenpin,LOW);
    digitalWrite(Yellowpin,LOW);
    digitalWrite(Redpin,HIGH); 
  }

}
