#include <stdio.h>

/**
 *_strstr - locates a substring.
 *@haystack: long string
 *@needle: string to be found
 *Return: pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int sizeNeedle = 0;
	int cont = 0;

	while (*(needle + sizeNeedle))
		sizeNeedle++;

	while (*(haystack + i))
	{
		if (*(haystack + i) == *(needle))
		{
			for (j = 0; j < sizeNeedle; j++)
			{
				if (*(haystack + i) == *(needle + j))
				{
					i++;
					cont++;
				}
			}
		}
		if (cont == sizeNeedle)
			break;
		i++;
	}
	return (haystack + (i - sizeNeedle));
}
