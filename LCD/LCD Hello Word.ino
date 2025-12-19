#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // ที่อยู่ I2C ส่วนใหญ่คือ 0x27

void setup() {
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

void loop() {
    

    lcd.setCursor(0, 0);
    lcd.print("Hello!!!!!!");
    lcd.setCursor(0, 1);
    lcd.print("Word!!!!!");
}   
