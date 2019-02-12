#include "holberton.h"

/**
 *print_sign - checks the sign of a number
 *
 *@n: the character to be checked
 *
 *Return: 1 if not zero and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}
