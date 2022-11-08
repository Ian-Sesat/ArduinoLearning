float radius;
float area;
String msg="Enter your radius:";
String msg2="The area is ";
float pi=3.142;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0){
    
    }
radius=Serial.parseFloat();
area=pi*radius*radius;
Serial.print(msg2);
Serial.println(area);
}
