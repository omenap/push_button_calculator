
#include <LiquidCrystal.h>
int rs=12, e=11, d4= 5, d5=4, d6= 3, d7=2;
int b1=6,b2=7,b3=8,b4=9, b5=10, b6=A2, b7=A3;
int buzzer=A4;
int number,num1,num2;
void(*resetFunc) (void) =0;
bool action;
LiquidCrystal lcd(rs,e,d4,d5,d6,d7);
int buttonstate;
int buttonstate2;
int buttonstate3;
int buttonstate4;
int buttonstate5;
int buttonstate6;
int buttonstate7;


void setup() {
 pinMode(b1,INPUT);
 pinMode(b2,INPUT);
 pinMode(b3,INPUT);
 pinMode(b4,INPUT);
 pinMode(b5,INPUT);
 pinMode(b6,INPUT);
 pinMode(b7,INPUT);
 pinMode(buzzer,OUTPUT);
 lcd.begin(16,2);
 lcd.clear(); //Then clean it

 
 }
void loop(){
  buttonstate = digitalRead(b1);
  buttonstate2 = digitalRead(b2);
  buttonstate3= digitalRead(b3);
  buttonstate4= digitalRead(b4);
  buttonstate5= digitalRead(b5);
  buttonstate6= digitalRead(b6);
  buttonstate7= digitalRead(b7);
  lcd.blink();
  if(buttonstate==HIGH){
    number=1;
    lcd.print("1");
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    if(action==true){
      num2=number;
    }
    else{
      num1=number;
    }
    }
    else if(buttonstate2==HIGH){
      number=2;
    lcd.print("2");
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    if(action==true){
      num2=number;
    }
    else{
      num1=number;
    }
    }
    else if(buttonstate3==HIGH){
      number=3;
    lcd.print("3");
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    if(action==true){
      num2=number;
    }
    else{
      num1=number;
    }
    }
    else if(buttonstate4==HIGH){
      number=4;
    lcd.print("4");
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    if(action==true){
      num2=number;
    }
    else{
      num1=number;
    }
    }
    if(buttonstate5==HIGH){
     num1=0;
     num2=0;
     number=0;
    int  M=0;
    lcd.clear();
    lcd.setCursor(M,0);
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    resetFunc();
    }
    if(buttonstate6==HIGH){
      action=true;
    lcd.print("*");
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    }
    if(buttonstate7==HIGH){
   //lcd.print("=");
    calculateResult();
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    displayResult();
    }
    }
    void calculateResult(){
      number= num1* num2;
    }
    void displayResult(){
      lcd.setCursor(14,1);
      lcd.print(number);
    }
    
    


 
