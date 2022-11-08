int redLED=11;       //declaring that pin 11 of the Arduino is to connect to the red LED
int greenLED=9;     //declaring that pin 9 of the Arduino is to connect to the green LED
int yellowLED=10;    //declaring that pin 10 of the Arduino is to connect to the yellow LED

void setup() {
  // put your setup code here, to run once:
 pinMode(redLED,OUTPUT);         //setting pin connected to the red LED as output
 pinMode(greenLED,OUTPUT);       //setting pin connected to the green LED as output
 pinMode(yellowLED,OUTPUT);      //setting pin connected to the yellow LED as output

}
//making a function for the turning ON of the red LED
void redLight(){
  digitalWrite(redLED,HIGH);      //turning ON the red LED
  digitalWrite(greenLED,LOW);     //turning OFF the green LED
  digitalWrite(yellowLED,LOW);    //turning OFF the yellow LED
  }
  
  //making a function for the turning ON of the green LED
void greenLight(){
  digitalWrite(redLED,LOW);       //turning OFF the red LED 
  digitalWrite(greenLED,HIGH);    //turning ON the green LED
  digitalWrite(yellowLED,LOW);    //turning OFF the yellow LED
  }

 void yellowLight(){
  digitalWrite(redLED,LOW);      //turning OFF the red LED
  digitalWrite(greenLED,LOW);     //turning OFF the green LED
  digitalWrite(yellowLED,HIGH);    //turning ON the yellow LED
  }
  
void loop() {
  // put your main code here, to run repeatedly:
redLight();                       //calling the redLight function that turns on the red LED only
delay(1000);                      //the red LED will be ON for 1 second
greenLight();                     //calling the greenLight function that turns on the green LED only
delay(1000);                      //the green LED will be ON for 1 second
yellowLight();                    //calling the yellowLED function that turns on the yellow LED only
delay(1000);                      //the yellow LED will be ON for 1 second
}
