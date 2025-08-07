#include <at89c51RC2.h>
#include <intrins.h>
void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 22;
	j = 3;
	k = 227;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main ()
{
	
	while(1)
	{
		
		P2=0xfe;
		Delay500ms();	
		P2=0xff;
		Delay500ms();	
	}
}