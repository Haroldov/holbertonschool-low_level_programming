#include "holberton.h"

void print_number(int n)
{
	int dec, tmp, sw;

	if (n < 10)
	{
		n *= -1;
	}
	if (n % 10 == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		tmp = n;
		sw = 0;
		for (dec = 1e9; dec != 0; dec /= 10)
		{
			if (((tmp/dec)) || (sw == 1))
			{
				_putchar((tmp / dec)  + '0');
				tmp = (n % dec);
				sw = 1;
			}
		}
	}
}
