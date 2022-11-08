float pi=3.142;
float area;
int r=1;
int wait(1000);

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
   area=pi*r*r;
   Serial.print("Area of a circle with radius ");
   Serial.print(r);
   Serial.print(" is ");
   Serial.println(area);
   r=r+1;
   delay(wait);
   

}
