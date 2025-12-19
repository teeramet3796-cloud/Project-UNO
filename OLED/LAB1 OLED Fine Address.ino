// LAB 

#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SH1106.h"

#define OLED_RESET -1                       
Adafruit_SH1106 display(OLED_RESET);
 
void setup() {
    display.begin(SH1106_SWITCHCAPVCC, 0x3C); 
   
    display.clearDisplay();     

    display.setTextColor(WHITE);            

    display.setTextSize(1);
    display.setCursor(0, 5);                
    display.println(" WELCOME to Teccom");

    display.println();

    display.setTextSize(2);
    display.println("LAB1 OLED");

    display.setTextSize(2);
    display.println("");

    display.setTextSize(1);
    display.println("...OLED 1.3 TESTER...");
    display.display();
}
 
void loop() {
}
