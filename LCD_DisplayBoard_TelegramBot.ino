#include "CTBot.h"
#include<LiquidCrystal.h>
CTBot myBot;

LiquidCrystal lcd(D1,D2,D3,D5,D6,D7);

String ssid  = "xxxxxxxxx";
String pass  = "xxxxxxxxx";
String token = "xxxxxxxxxx:xxxxxxxxxxxxxxxxxxxxxxxxx";
String s="";

void setup() {
  
  Serial.begin(115200);
  Serial.println("Starting TelegramBot...");
  lcd.begin(16,2);
  lcd.print("open Telegram");

  myBot.wifiConnect(ssid, pass);

  myBot.setTelegramToken(token);
  
  if (myBot.testConnection())
    Serial.println("\ntestConnection OK");
  else
    Serial.println("\ntestConnection NOT OK");

  lcd.clear();
}

void loop() {
  
  TBMessage msg;
  if (CTBotMessageText == myBot.getNewMessage(msg))
  {
    s="";
    lcd.clear();
    s=msg.text+"  ";
    myBot.sendMessage(msg.sender.id,"Check your message on display.");
    Serial.println(msg.text);
    lcd.setCursor(0,0);
    lcd.print(s);
  } 
  for(int i=0;i<45;i++)
  {
    lcd.scrollDisplayLeft();
    delay(400);
  }
}
