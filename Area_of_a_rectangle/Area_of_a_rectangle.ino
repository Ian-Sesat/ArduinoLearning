
int breadth=2;
int width=1;
int area;
int wait=1000;
String mess1="the area of a rectangle whose length is ";
String mess2=" and width of ";
String mess3=" is ";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 area=breadth*width;
  Serial.print(mess1);
  Serial.print(breadth);
  Serial.print(mess2);
  Serial.print(width);
  Serial.print(mess3);
  Serial.println(area);
    breadth=breadth+1;
  width=width+1;
  delay(wait);
  
  

}
