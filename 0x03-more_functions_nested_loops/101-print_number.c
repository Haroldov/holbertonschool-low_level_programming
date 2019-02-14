#include "holberton.h"
#include <stdio.h>

/**
 *print_number - prints a number
 *@n: the number to be printed
 *Return: none
 */

void print_number(int n)
{
	unsigned int tmp, cp;
	int dec, sw, swn;

	swn = 0;
	if (n < 0)
	{
		cp = n * -1;
		tmp = n * -1;
		swn = 1;
	}
	else
	{
		tmp = n;
		cp = n;
	}
	if (cp / 10 == 0)
	{
		if (swn)
			_putchar('-');
		_putchar(tmp + '0');
	}
	else
	{
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
				_putchar((tmp / dec) + '0');
				tmp = (cp % dec);
				sw = 1;
			}
		}
	}
}
