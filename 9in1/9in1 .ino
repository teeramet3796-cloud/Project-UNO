#include <DHT.h> 
#define DHTPIN 4   // data pin 
#define DHTTYPE DHT11  // Define the type of DHT sensor
DHT dht(DHTPIN, DHTTYPE);

#define ledB 12
#define ledR 13

#define SW1 2
#define SW2 3
 
#define potPin A0

#define LDRPin A1 

#define LM35Pin A2

void setup() {
  Serial.begin(9600);
    dht.begin();    
}
void loop() {
    
 }
   
/*LED LAB1
    void loop() {
     //int time =1000 ; //งาน1
    int time =1000 ;
    LEDBlynk(time) ;
    }
  //LEDBlynk
   void LEDBlynk(int time){
    digitalWrite(ledB, HIGH); 
    digitalWrite(ledR, HIGH);
    delay(time) ;
    digitalWrite(ledB, LOW); 
    digitalWrite(ledR, LOW);
    delay(time) ;
    }
/*SW LAB2
   void setup() {
    LEDBlynk(time) ; //งาน2
  Serial.begin(9600);
  pinMode(ledB, OUTPUT); 
  pinMode(ledR, OUTPUT); 

  pinMode(SW1, INPUT) ;
  pinMode(SW2, INPUT) ;

   int b1 = digitalRead(SW1) ;
    int b2 = digitalRead(SW2) ;
    
    if (b1==0){
       digitalWrite(ledB, LOW) ;
       digitalWrite(ledR, HIGH) ;       
    }
    if (b2==0){
       digitalWrite(ledB, HIGH) ;
       digitalWrite(ledR, LOW) ;       
    }
    else {
    digitalWrite(ledB, LOW) ;
    digitalWrite(ledR, LOW) ;
    */
/*DHT LAB3
 
 void loop(){  
     float h = dht.readHumidity();
     float c = dht.readTemperature();

     if (isnan(h) || isnan(c)) {
        Serial.println("Failed to read from DHT sensor!");
     return;
  }
    Serial.print("Humidity: ");  Serial.print(h);  Serial.print(" %\t");
    Serial.print("Temp: ");  Serial.print(c);  Serial.println(" C");
 }
  */

/*Void pot LAN4
    void loop() {
     int adcValue = analogRead(potPin) ;
     delay(100) ;
     float vdcValue = (adcValue *(5.0/1023.0)) ;

     Serial.print("ADCpot: ");  Serial.print(adcValue); 
     Serial.print("\t vdcpot: ");  Serial.println(vdcValue); 
 }
 */
/*LAB5
    void loop() {
     int LDRadcValue = analogRead(LDRPin) ;
     delay(100) ;
     float LDRvdcValue = (LDRadcValue *(5.0/1023.0)) ;

     Serial.print("LDR ADC");  Serial.print(LDRadcValue); 
     Serial.print("\t vdc LDR: ");  Serial.println(LDRvdcValue);
 */
/*LAB6
    void loop() {
     int adcTempC = analogRead(LM35Pin) ;
     float TempC = (5.0 * adcTempC  * 100.0) / 1024.0;
     Serial.print("LM35 ADC");  Serial.print(adcTempC);
     Serial.print("\t LM35 ADC");  Serial.println(TempC);
