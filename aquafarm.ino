3.2 SOURCE CODE
#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
#include "dht.h"
#define dataPin A0
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);  // 8-RS, 9-EN, 10-D4, 11-D5, 12-D6, 13-D7

SoftwareSerial bt(6,7);
#define LF 2
#define LB 3

#define water 4
#define RF A3
#define RB A4

#define DEBUG 0
dht DHT;
int temp;
int hum;
int count=0;
int timer_count=0;
int interruptPin = 1;
int value = 0;
int temp_pin = 0;
int fahrenheit = 0;

int connectionId = 0;





void title(void)
{
  lcd.clear();
  lcd.print("AQUARIUM MONITOR");
  lcd.setCursor(0,1);
  lcd.print("& AUTO CONTRL SM");
  lcd.clear();
}

void setup() {
   pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(4,INPUT);
  lcd.clear();
  lcd.begin(16, 2);
  title();
  lcd.clear();
  title();
  delay(2000);
  while(!Serial){;} // waiting for serial communication to setup

  bt.begin(9600);
}
void loop() {
int readData = DHT.read11(dataPin);
temp = DHT.temperature;
hum=DHT.humidity;
lcd.setCursor(0,1); 
lcd.print("Tmp:"); 
lcd.print(temp); 
lcd.print((char)223); //degree symbol
lcd.print("C ");

  lcd.setCursor(10,1);
  lcd.print("Hm:");
  lcd.print(hum);
  lcd.print("% ");

if(digitalRead(water)==1)  
{
digitalWrite(RF,HIGH); 
digitalWrite(RB,LOW); 
lcd.setCursor(0,0);
  lcd.print("WATER_STS: NO"); 
}
else{
digitalWrite(RF,LOW); 
digitalWrite(RB,LOW);
lcd.setCursor(0,0);
  lcd.print("WATER_STS: YES");   
}
bt.listen(); // listening to the bluetooth

  while(bt.available()) // till we are receiving the input continue in the loop
  {
      char ch = bt.read();  // reading one character at a time

      if(ch=='A'){          // action to be performed if input is 'f'
        digitalWrite(LF,HIGH);
        digitalWrite(LB,LOW);
        delay(500);
}
}

