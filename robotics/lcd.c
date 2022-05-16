#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  pinMode(8,INPUT);
}

int buttonState = 0;
int previousbuttonState = 0;
int num1 = 0;

void loop() {
    // put your main code here, to run repeatedly:
    delay(2000);
    lcd.clear();

    lcd.setCursor(0,0);
    
    previousbuttonState = buttonState;
    buttonState = digitalRead(8);
    
    if ((buttonState == LOW)&&(previousbuttonState==HIGH)){
        lcd.print("%d", num1);
    }
    delay(1000);
}