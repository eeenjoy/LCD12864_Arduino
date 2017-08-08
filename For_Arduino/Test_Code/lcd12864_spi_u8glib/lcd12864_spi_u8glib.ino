#include "U8glib.h"
U8GLIB_ST7920_128X64_1X u8g(3, 9, 8); //SCK = en = 18, MOSI = rw = 16, CS = di = 17

//我用的是LCD12864，不一样的话去U8G例程里找
void draw(void) 
{
    // 设字体，打印"HELLO WORLD”。字体上code.google.com/p/u8glib/wiki/fontsize找，上外网要翻墙的
    u8g.drawFrame(0,0,128,64);
    u8g.drawFrame(1,1,126,62);
    u8g.setFont(u8g_font_timB10);
    u8g.drawStr( 40, 13, "Eeenjoy");
    u8g.drawStr( 25, 30, "Hello World!");
    u8g.drawStr( 8, 45, "ST7920, LCD12864");
    u8g.drawStr( 15, 60, "128 cols, 64 rows");
}

void setup(void) 
{
    //这些我不知道是什么，不敢删掉
    if ( u8g.getMode() == U8G_MODE_R3G3B2 ) 
    {
        u8g.setColorIndex(255); // white
    }
    else if ( u8g.getMode() == U8G_MODE_GRAY2BIT ) 
    {
        u8g.setColorIndex(3); // max intensity
    }
    else if ( u8g.getMode() == U8G_MODE_BW ) 
    {
        u8g.setColorIndex(1); // pixel on
    }
    else if ( u8g.getMode() == U8G_MODE_HICOLOR ) 
    {
        u8g.setHiColorByRGB(255,255,255);
    }
}

void loop(void) 
{
    //u8g必备语句
    u8g.firstPage(); 
    do {
        draw();
    } while( u8g.nextPage() );
}
