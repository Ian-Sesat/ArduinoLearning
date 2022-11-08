#include <DHT.h>
#define Type DHT11
#include <LiquidCrystal_I2C.h>
int sensePin=2;
DHT myDht(sensePin,Type);
float humidity;
float tempF;
float tempC;
int wait=500;
LiquidCrystal_I2C lcd(0x27, 16,2);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensePin,OUTPUT);
  myDht.begin();
  lcd.begin(16,2);
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello World");
  lcd.setCursor(0,1);
  lcd.print("I'm Sesat ");
  delay(5000);
  lcd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  humidity=myDht.readHumidity();
  tempC=myDht.readTemperature();
  tempF=myDht.readTemperature(true);

  lcd.print("Humidity=");
 lcd.print(humidity);
 lcd.print("%");
 lcd.setCursor(0,1);
  lcd.print(" Temp=");
  lcd.print(tempC);
  lcd.print("C ");

  delay(wait);
  

}
