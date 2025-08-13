#include <REGX52.h>
#include "delay.h"


sbit LCD_RS=P2^6;
sbit LCD_RW=P2^5;
sbit LCD_E=P2^7;

 #define LCD_DataPort P0
//void Delay(int ms)		//@11.0592MHz 1ms
//{
//	unsigned char i, j;

//	while(ms--)
//	{	i = 11;
//	j = 190;
//	do
//	{
//		while (--j);
//	} while (--i);
//	}

//}

void LCD_WriteCommand(unsigned char Command)
{
		LCD_RS=0;
		LCD_RW=0;
		LCD_DataPort=Command;
		LCD_E=1;
		Delay(2);
	
		LCD_E=0;
		Delay(2);
}

void LCD_WriteData(unsigned char Data)
{

		LCD_RS=1;
		LCD_RW=0;
		LCD_DataPort=Data;
		LCD_E=1;
		Delay(2);
	
		LCD_E=0;
		Delay(2);
}
void LCD_Init(void)
{
	LCD_WriteCommand(0x38);
	LCD_WriteCommand(0x0c);
	LCD_WriteCommand(0x06);
	LCD_WriteCommand(0x01);
}
void LCD_AC(unsigned char Line,unsigned char Column)
{
	if(Line==1)
	{
		LCD_WriteCommand(0x80|(Column-1));
	
	}
	else
	{
		LCD_WriteCommand(0x80|(Column-1)+0x40);
	
	}

}


void LCD_Showchar(unsigned char Line,unsigned char Column,unsigned char Char)
{
LCD_AC(Line,Column);
	LCD_WriteData(Char);
}

void LCD_ShowString(unsigned char Line,unsigned char Column,unsigned char String[])
{
	unsigned char i=0;
	LCD_AC(Line,Column);
	for (i=0;String[i]!=0;i++)
	{
	LCD_WriteData(String[i]);
	
	}
	}

	int Pow(int x,int y)
	{
	unsigned char i=0;
		int sum=1;
	for(i=0;i<y;i++)
	{
	sum*=x;
	
	}
	return sum;
	}
	
void LCD_ShowNum(unsigned char Line,unsigned char Column,unsigned int num,int len)
{
	unsigned int i=0;
LCD_AC(Line,Column);
	
	for(i=len;i>0;i--)
{
	
LCD_WriteData('0'+num/Pow(10,i-1)%10);
}

}

void LCD_ShowintNum(unsigned char Line,unsigned char Column,int Num,int Len)
{
	unsigned int i=0;
	unsigned Num1;
	LCD_AC(Line,Column);
if(Num>0)
{
LCD_WriteData('+');
	Num1=Num;
	
}
else
{
LCD_WriteData('-');
Num1=-Num;
}
for(i=Len;i>0;i--)
{
	
LCD_WriteData('0'+Num1/Pow(10,i-1)%10);
}

}









