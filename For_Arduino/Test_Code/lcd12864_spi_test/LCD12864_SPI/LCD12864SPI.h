#ifndef LCD12864SPI_h
#define LCD12864SPI_h

#include <avr/pgmspace.h>
#include <inttypes.h>


class LCD12864SPI 
{
    typedef unsigned char uchar;

public:
    LCD12864SPI();

    void Initialise(void);
    void delayns(void);
 
    void WriteByte(int dat);
    void WriteCommand(int CMD);
    void WriteData(int CMD);

    void CLEAR(void);
    void DisplayString(int X,int Y,uchar *ptr,int dat);
    void DisplaySig(int M,int N,int sig);
    void DrawFullScreen(uchar *p);

    int delaytime;
    int DEFAULTTIME;

    static const int latchPin = 8; 
    static const int clockPin = 3;  
    static const int dataPin = 9;  
};
extern LCD12864SPI LCD;    
#endif
