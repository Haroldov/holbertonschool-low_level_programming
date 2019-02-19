#include "holberton.h"

/**
 *puts_half - prints half of a string, followed by a new line
 *@str: string to be printed
 *Return: none
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = ((i / 2) + 1); j <= i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
