
int redPin=8;
int j;
int blinks;
String msg="How many blinks do you want?";
int wait=1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0){
    
    }
blinks=Serial.parseInt();
for(j=1; j<=blinks; j=j+1)
{
  digitalWrite(redPin,HIGH);
  delay(wait);
  digitalWrite(redPin,LOW);
  delay(wait);
  }
}
