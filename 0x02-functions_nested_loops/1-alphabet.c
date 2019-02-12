#include "holberton.h"

/**
 *print_alphabet - prints the alphabet in terminal
 *
 *Return: nothing
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
