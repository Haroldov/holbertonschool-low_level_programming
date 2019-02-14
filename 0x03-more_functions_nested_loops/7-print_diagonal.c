#include "holberton.h"

/**
 *print_diagonal - draws a diagonal line on the terminal..
 *@n: number of times the character \ should be printed.
 *Return: none
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = n; i != 0; i--)
		{
			for (j = 0; j != (n - i); j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
