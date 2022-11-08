/*
Author:Sesat
Uses a single BROWN BLUE RED LED to cycle through those three colors.
*/
void setup() {
  pinMode(9, OUTPUT);//for brown coour
  pinMode(10, OUTPUT);//for blue
  pinMode(11, OUTPUT);//for red
}
void loop() {
  digitalWrite(9, HIGH);   //turns on brown
  digitalWrite(11, LOW);   //turns off red
  delay(1000);             // waits for 1 second
  digitalWrite(10, HIGH);  // turns on blue
  digitalWrite(9, LOW);    // turns off brown
  delay(1000);             // waits for 1 second
  digitalWrite(11, HIGH);  // turns on red
  digitalWrite(10, LOW);   // turns off blue
  delay(1000);             // waits for 1 second
}
