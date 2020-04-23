# PIC18F4550_LCD16x2_8bit_library
## Usage
1.LCD_Init() 
> Use to initialize the LCD 16x2 display
> Example:LCD_Init();
2.LCD_Command()
> Use to send command to LCD Display directly
> Command code in is should given in the parentheses
> Example:LCD_Command(0x18);
3.LCD_Char()
> Use to send single character to the display 
> Example:LCD_char(a);
4.LCD_String()
> Use to send a string to the display
> Example:LCD_String("hello world");
5.LCD_String_xy()
> used to send a string to the display along with position to be display 
> Example: LCD_String_xy(1,0,"hello world")(output will be the string is displayed in the first row and o position)
6.LCD_Rolling()
> used to create a small animation the text is move from left to right and vice versa 
>Example:LCD_Rolling(1,0,"Hello World");
