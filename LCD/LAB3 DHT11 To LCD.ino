//LCD 16x2
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); 

//DHT11
#include <DHT.h> 
#define DHTPIN 4    
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(9600);
    dht.begin();  

    lcd.init();
    lcd.backlight();
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Lab2 Hello Word");
    lcd.setCursor(0, 1);
    lcd.print("Theeramet");
    delay(2000) ;

    lcd.clear();

}

void loop() 
    {
    
    float h = dht.readHumidity();
    float c = dht.readTemperature();

    Serial.print("Humidity: ");  Serial.print(h);  Serial.print(" %\t");
    Serial.print("Temp: ");  Serial.print(c);  Serial.println(" C");


   lcd.setCursor(0,0);
   lcd.print("Humi ");
   lcd.print(h);

   lcd.setCursor(0,1);
   lcd.print("Temp ");
   lcd.print(c);



    }

    /*lcd.setCursor(0, 0);
    lcd.print("Hello!!!!!!");
    lcd.setCursor(0, 1);
    lcd.print("Word!!!!!");
    */
  
