#include <at89c51RC2.h>
#include "delay.h"

unsigned int MatrixK()
{
	unsigned int Key=0;
	P1=0xff;
	P1_3=0;
if(P1_7==0){Delay(20);while(P1_7==0)Delay(20);Key=1;}
if(P1_6==0){Delay(20);while(P1_6==0)Delay(20);Key=5;}
if(P1_5==0){Delay(20);while(P1_5==0)Delay(20);Key=9;}
if(P1_4==0){Delay(20);while(P1_4==0)Delay(20);Key=13;}//第一列

P1=0xff;
	P1_2=0;
if(P1_7==0){Delay(20);while(P1_7==0)Delay(20);Key=2;}
if(P1_6==0){Delay(20);while(P1_6==0)Delay(20);Key=6;}
if(P1_5==0){Delay(20);while(P1_5==0)Delay(20);Key=10;}
if(P1_4==0){Delay(20);while(P1_4==0)Delay(20);Key=14;}//第2列

P1=0xff;
	P1_1=0;
if(P1_7==0){Delay(20);while(P1_7==0)Delay(20);Key=3;}
if(P1_6==0){Delay(20);while(P1_6==0)Delay(20);Key=7;}
if(P1_5==0){Delay(20);while(P1_5==0)Delay(20);Key=11;}
if(P1_4==0){Delay(20);while(P1_4==0)Delay(20);Key=15;}//第3列


P1=0xff;
	P1_0=0;
if(P1_7==0){Delay(20);while(P1_7==0)Delay(20);Key=4;}
if(P1_6==0){Delay(20);while(P1_6==0)Delay(20);Key=8;}
if(P1_5==0){Delay(20);while(P1_5==0)Delay(20);Key=12;}
if(P1_4==0){Delay(20);while(P1_4==0)Delay(20);Key=16;}//第4列


return Key;
}