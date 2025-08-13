
#include <lcd1602.h>
#include <at89c51RC2.h>
#include "MatrixK.h"

unsigned int Key=0;
void main()
{
	 LCD_Init();
	LCD_ShowString(1,1,"MatrixKey");
	while(1)
	{
	Key= MatrixK();
	
	if(Key)
 	{
	LCD_ShowNum(2, 1,Key,2);
	
	
	
	}
	}
	
	
	
	
}