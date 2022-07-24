# LCD_DisplayBoard_Telegram
LCD display board, where message is sent through telegram

libraies required:
1. CBot
2. LiquidCrystal

Components required:
1. NodeMCU
2. LCD 16x2
3. jumpwires
4. Telegram API key

NOTE: Install NodeMCU drivers for arduino IDE.

Procedure:
1. Goto sketch -> include library -> manage libraries.
2. Search for "LiquidCrystal" by Arduino, then click on install.
3. Search for "CBot" by Stefano Ledda, or (serach as telegramBot) then click on install.
4. Replace "WIFI_SSID" with your wifi name and replace "WIFI_PSWD" with your wifi password.
5. In line 9, Enter your telegram API key.

How to get Telegram API key:
https://youtu.be/idoKbPCaDcM

In the bot father message, they will provide you a link for the chat related to the API key. open that chat and use "/start" command there to start your bot.



Connections:
![16X2-LCD-PINS](https://user-images.githubusercontent.com/101927825/180662265-796557ae-302c-4948-8bf1-5d051be2bc19.png)

LCD    -->     NodeMCU
1. VSS --> GND
2. VDD --> vin
3. VO --> from pot
4. RS --> D1
5. RW --> GND
6. E --> D2
7. D0 --> No connection
8. D1 --> No connection
9. D2 --> No connection
10. D3 --> No connection
11. D4 --> D3
12. D5 --> D5
13. D6 --> D6
14. D7 --> D7
15. A --> 3.3v
16. K --> GND
