#include "holberton.h"

/**
 *string_toupper -  changes all lowercase letters of a string to uppercase.
 *@s: string to be uppercased
 *Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int i;

	while (*(s + i))
	{
		if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
			*(s + i) -= 32;
		i++;
	}
	return (s);
}
