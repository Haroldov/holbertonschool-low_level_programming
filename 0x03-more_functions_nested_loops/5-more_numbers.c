#include "holberton.h"

/**
 *more_numbers - print 10 ties the numbers from 0 to 14
 *Return: none
 */

void more_numbers(void)
{
	int i, rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (i = 1; i <= 14; i++)
		{
			if ((i / 10) != 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
