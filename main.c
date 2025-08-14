
#include <lcd1602.h>
#include <at89c51RC2.h>
#include "MatrixK.h"

unsigned int Key=0;
int PassWord,count;
void main()
{
	 LCD_Init();
	LCD_ShowString(1,1,"PassWord");
	while(1)
	{
	Key= MatrixK();
	
	if(Key)
 	{
		if(Key<=10)
		{
			if(count<4)
			{	
				PassWord*=10;
			PassWord+=Key%10;
			count++;
			}
		LCD_ShowNum(2, 1,PassWord,4);
		}
		if(Key==11)
		{
			if(PassWord==6666)
			{
				LCD_ShowString(1,14,"OK ");
				PassWord=0;
				count=0;
				LCD_ShowNum(2, 1,PassWord,4);
			}
			else
			{
			LCD_ShowString(1,14,"ERR");
				PassWord=0;
				count=0;
				LCD_ShowNum(2, 1,PassWord,4);
			}
		
		}
		if(Key==12)
		{
			PassWord=0;
			count=0;
			LCD_ShowNum(2, 1,PassWord,4);
		}
	
	}
	}
	
	
	
	
}