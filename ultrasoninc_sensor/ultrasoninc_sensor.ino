int trigPin=12;
int echoPin=11;
int pingTravelTime;
float pingTravelDistance;
float distance;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(trigPin,LOW);
 delayMicroseconds(10);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(25);
 digitalWrite(trigPin,LOW);
 delayMicroseconds(25);
 pingTravelTime=pulseIn(echoPin,HIGH);
 pingTravelDistance=(765.*5280.*12.*pingTravelTime)/(3600.*1000000.);
 distance=pingTravelDistance/2.;
 delay(25);
 Serial.println(distance);

}
