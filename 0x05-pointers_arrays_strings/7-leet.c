#include "holberton.h"

/**
 *leet - encodes a string into 1337.
 *@s: string to be encoded
 *Return: string encoded
 */

char *leet(char *s)
{
	char lts[] = "aAeEoOtTlL";
	char nums[] = "4433007711";
	int i = 0;
	int aux = 0;

	while (*(s + i))
	{
		aux = 0;
		while (lts[aux])
		{
			if (*(s + i) == lts[aux])
				*(s + i) = nums[aux];
			aux++;
		}
		i++;
	}
	return (s);
}
