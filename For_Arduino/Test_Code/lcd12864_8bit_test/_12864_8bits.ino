/*
LCD  Arduino
RS = 17; Analog Pin3
RW = 16; Analog Pin2
EN = 18; Analog Pin4
D0  = 8; 
D1  = 9;
D2  = 10; 
D3  = 11; 
D4  = 4;
D5  = 5; 
D6  = 6; 
D7  = 7;
PIN15 PSB = 5V;
*/

#include "LCD12864R.h"
#define AR_SIZE( a ) sizeof( a ) / sizeof( a[0] )

unsigned char show0[]={0xBC,0xAB,0xBF,0xCD,0xB9,0xA4,0xB7,0xBB};//极客工坊
unsigned char show1[]="geek-workshop";
 
void setup()
{
    LCDA.Initialise(); // 屏幕初始化
    delay(100);
}

void loop()
{
    LCDA.CLEAR();//清屏
    delay(100);
    LCDA.DisplayString(0,2,show0,AR_SIZE(show0));//第一行第三格开始，显示文字极客工坊
    delay(100);
    LCDA.DisplayString(2,1,show1,AR_SIZE(show1));;//第三行第二格开始，显示文字geek-workshop
    while(1);
}

