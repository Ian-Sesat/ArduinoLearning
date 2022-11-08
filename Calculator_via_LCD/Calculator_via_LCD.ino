#include<Wire.h>
#include<LiquidCrystal_I2C.h>
float firstNum;
float secNum;
float answer;
String operation;
LiquidCrystal_I2C lcd(0x27, 16,2);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello World");
  lcd.setCursor(0,1);
  lcd.print("I am Sesat");
  delay(3000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("First Number?");
while(Serial.available()==0){
  }
firstNum=Serial.parseFloat();
lcd.clear();
lcd.setCursor(0,0);
  lcd.print("Second Number?");
while(Serial.available()==0){
  }
secNum=Serial.parseFloat();
lcd.clear();
lcd.setCursor(0,0);
lcd.print(" Input(+,-,/,*)");
while(Serial.available()==0){
  }
  operation=Serial.readString();
  if(operation=="+"){
    answer=firstNum+secNum;
    }
      if(operation=="-"){
    answer=firstNum-secNum;
    }
      if(operation=="*"){
    answer=firstNum*secNum;
    }
      if(operation=="/"){
    answer=firstNum/secNum;
    }
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(firstNum);
    lcd.print(operation);
    lcd.print(secNum);
    lcd.print(" = ");
    lcd.print(answer);
    lcd.setCursor(0,1);
    lcd.print("Thank You");
}
