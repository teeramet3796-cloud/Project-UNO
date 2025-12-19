#include <DHT.h>
#include <DHT_U.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define dht1 4
#define dhttype DHT11

DHT dht(dht1, dhttype);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
    float temp = dht.readTemperature();
    float hum = dht.readHumidity();

    Serial.begin(9600);

    dht.begin();

    lcd.init();
    lcd.backlight();
    lcd.clear();
}

void loop()
{
    DHT5();
    DISPLAYLCD();
}

void DHT5()
{
    float temp = dht.readTemperature();
    float hum = dht.readHumidity();

    Serial.print("TEMP : ");
    Serial.print(temp);
    Serial.print("C");
    Serial.print(" | ");
    Serial.print("HUM : ");
    Serial.print(hum);
    Serial.print("%");
    Serial.println();
    delay(1000);
}

void DISPLAYLCD()
{
    float temp = dht.readTemperature();
    float hum = dht.readHumidity();

    lcd.setCursor(0, 0);
    lcd.print("TEMP ");
    lcd.print(temp);
    lcd.print("C");
    lcd.setCursor(0, 1);
    lcd.print("HUM  ");
    lcd.print(hum);
    lcd.print("%");
}
