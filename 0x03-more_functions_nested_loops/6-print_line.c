#include "holberton.h"

/**
 *print_line - draws a straight line in the terminal.
 *@n: number of times the character _ should be printed.
 *Return: none
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = n; i != 0; i--)
			_putchar('_');
		_putchar('\n');
	}
}
