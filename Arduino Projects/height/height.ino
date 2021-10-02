int trigger_pin = 9;
int echo_pin = 10;
int buzzer_pin = 13; 
int time;
int distance; 

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup ( ) {
        Serial.begin (9600); 
        pinMode (trigger_pin, OUTPUT); 
        pinMode (echo_pin, INPUT);
        pinMode (buzzer_pin, OUTPUT);
        pinMode (8,OUTPUT);
        pinMode (11, OUTPUT);
        digitalWrite(11, LOW);
        digitalWrite(8, HIGH);

         // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("  Height");
  
}
void loop ( ) {
    digitalWrite (trigger_pin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);
    time = pulseIn (echo_pin, HIGH);
    distance = (time * 0.034) / 2;

    lcd.setCursor(0, 1);
    lcd.println (distance);  
    delay (500);
    
 if (distance <= 15) 
        {
        Serial.println (" Door Close ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (buzzer_pin, LOW);
        delay (500);
        }

  else {
        Serial.println (" Door Open ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (buzzer_pin, HIGH);
        delay (500);        
  } 
 }
