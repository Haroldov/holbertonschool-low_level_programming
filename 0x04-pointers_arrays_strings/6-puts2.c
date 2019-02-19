#include "holberton.h"

/**
 *puts2 - prints one char out of 2 of a string, followed by a new line.
 *@str: string to be printed
 *Return: none
 */

void puts2(char *str)
{
	int i = 0;

	while(*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
