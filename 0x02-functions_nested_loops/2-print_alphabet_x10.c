#include "holberton.h"

/**
 *print_alphabet_x10 - prints the alphabet in terminal (x10)
 *
 *Return: nothing
 */

void print_alphabet_x10(void)
{
	int i, rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
