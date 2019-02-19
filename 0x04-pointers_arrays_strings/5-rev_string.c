#include "holberton.h"

/**
 *rev_string -  reverses a string.
 *@s: pointer to the string that will be reversed.
 *Return: none
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char tmp;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = i; j >= 0; j--)
	{
		if (j <= (i / 2))
		{
			tmp = *(s + j);
			*(s + j) = *(s + (i - j));
			*(s + (i - j)) = tmp;
		}
	}
}
