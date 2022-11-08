#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);


void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.backlight();
  lcd.setCursor(0,0);
lcd.print("Hello World");
lcd.setCursor(0,1);
lcd.print("I am Sesat");
delay(5000);
lcd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Quickdemo:");
lcd.setCursor(0,1);
lcd.print("Flashing backlight ");
delay(2500);
lcd.clear();
for (int j=1; j<5; j++){
  lcd.backlight();
  delay(500);
  lcd.noBacklight();
  delay(500);
  
  }
lcd.backlight();
 lcd.setCursor(0,0);
lcd.print(" Scrolldemo:");
delay(1500);

lcd.autoscroll();
for(int myno=0; myno<=10; myno++){
  
  lcd.print(myno);
  delay(500);
  }
  
  lcd.noAutoscroll();
  lcd.clear();
  delay(1000);

 
}
