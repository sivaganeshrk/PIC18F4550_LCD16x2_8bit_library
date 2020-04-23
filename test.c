#include "LCD_8bit_file.h"
void main()
{
LCD_Init();
LCD_Clear();
LCD_String_xy(1,0,"helloworld");
MSdelay(1000);
LCD_Rolling(1,0,16,"helloworld");
}