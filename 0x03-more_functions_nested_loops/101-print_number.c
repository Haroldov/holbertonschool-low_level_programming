#include "holberton.h"

/**
 *print_number - prints a number
 *@n: the number to be printed
 *Return: none
 */

void print_number(int n)
{
	int dec, tmp, sw, swn;

	swn = 0;
	if (n < 0)
	{
		n *= -1;
		swn = 1;
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
			if (((tmp / dec)) || (sw == 1))
			{
				if (swn)
				{
					_putchar('-');
					swn = 0;
				}
				_putchar((tmp / dec)  + '0');
				tmp = (n % dec);
				sw = 1;
			}
		}
	}
}
