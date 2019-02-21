#include "holberton.h"

/**
 *cap_string - capitalizes all words of a string.
 *Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ),
 *{ and }
 *@s: string to be capitalized.
 *Return: string capitalized.
 */

char *cap_string(char *s)
{
	int i = 0;
	char key[] = " \t\n,;.!?\"(){}";
	int sw = 0;
	int c = 0;

	while (*(s + i))
	{
		sw = 0;
		c = 0;
		while (c != 12)
		{
			sw += (*(s + i - 1) == key[c]) ? 1 : 0;
			c++;
		}
		if ((i == 0) || (sw != 0))
		{
			if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
				*(s + i) -= 32;
		}
		i++;
	}
	return (s);
}
