void Delay(unsigned int ms)		//@11.0592MHz
{
	while(ms--)
	{	unsigned char i, j;

	
	i = 11;
	j = 190;
	do
	{
		while (--j);
	} while (--i);
	}

}
