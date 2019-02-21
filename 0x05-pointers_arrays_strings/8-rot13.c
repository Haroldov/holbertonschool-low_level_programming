#include "holberton.h"

/**
 *rot13 - encodes a string using rot13.
 *@s: string to be encoded
 *Return: string encoded
 */

char *rot13(char *s)
{
	char lts[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ltsEqs[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int aux = 0;

	while (*(s + i))
	{
		aux = 0;
		while (lts[aux])
		{
			if (*(s + i) == lts[aux])
			{
				*(s + i) = ltsEqs[aux];
				break;
			}
			aux++;
		}
		i++;
	}
	return (s);
}
