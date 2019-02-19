#include "holberton.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: pointer to the string that will be printed.
 *Return: none
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = i; j != -1; j--)
		_putchar(*(s + j));
	_putchar('\n');
}
