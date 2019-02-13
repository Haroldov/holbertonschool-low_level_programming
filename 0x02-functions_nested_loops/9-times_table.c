#include "holberton.h"
/**
 *times_table - print all the tables of mult
 *
 *Return: none
 */

void times_table(void)
{
	int i, mult, cont;

	cont = 0;
	for (i = 0; i <= 100; i++)
	{
		mult = (i % 10) * cont;
		if ((i - 1) % 10 == 9)
		{
			cont += 1;
			_putchar('\n');
		}
		else
		{
			if (i != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		if (mult / 10 != 0)
		{
			_putchar((mult - (mult % 10)) / 10 + '0');
		}
		else
		{
			if (i % 10 != 0)
				_putchar(' ');
		}
		if (i != 100)
			_putchar((mult % 10) + '0');

	}
}
