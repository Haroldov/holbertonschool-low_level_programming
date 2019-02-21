#include "holberton.h"

/**
 *_strcmp - compares two strings.
 *@s1: string one
 *@s2: string two
 *Return: int if zero s1 = s2, if neg s1 < s2 and if pos s2 < s1
 */

int _strcmp(char *s1, char *s2)
{
	int i1 = 0;
	int i2 = 0;
	int c = 0;

	while (*(s1 + i1) || *(s2 + i2))
	{
		if (*(s1 + i1))
		{
			c += 1;
		}
		if (*(s2 + i2))
		{
			c -= 1;
		}
		i1++;
		i2++;
	}
	return (c);
}
