#include "holberton.h"

/**
 *print_numbers - print the numbers from 0 to 9.
 *Return: return none
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
		if (i == 57)
			_putchar('\n');
	}
}
