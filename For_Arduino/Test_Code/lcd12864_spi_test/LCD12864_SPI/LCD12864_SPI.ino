/*
LCD  Arduino
PIN1 = GND
PIN2 = 5V
RS(CS) = 8; 
RW(SID)= 9; 
EN(CLK) = 3;
PIN15 PSB = GND;
*/

#include "LCD12864SPI.h"
#include "array.h"
#define AR_SIZE( a ) sizeof( a ) / sizeof( a[0] )

void setup()
{
    LCD.Initialise(); // 屏幕初始化
    delay(100);
}

void loop()
{
    LCD.CLEAR();//清屏
    delay(100);
    LCD.DisplayString(0,2,show0,AR_SIZE(show0));//第一行第三格开始，显示文字极客工坊
    delay(100);
    LCD.DisplayString(2,1,show1,AR_SIZE(show1));;//第三行第二格开始，显示文字geek-workshop
    delay(5000);
    LCD.CLEAR();//清屏
    delay(100);
    LCD.DrawFullScreen(logo0);
    delay(5000);
}

