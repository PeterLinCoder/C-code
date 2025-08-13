#ifndef __LCD1602_H__
#define __LCD1602_H__

void LCD_Init(void);//初始化

void LCD_Showchar(unsigned char Line,unsigned char Column,unsigned char Char);//字符

void LCD_ShowString(unsigned char Line,unsigned char Column,unsigned char String[]);//字符串

void LCD_ShowintNum(unsigned char Line,unsigned char Column,int Num,int Len);//有符号数

void LCD_ShowNum(unsigned char Line,unsigned char Column,int num,int len);//无符号数
#endif