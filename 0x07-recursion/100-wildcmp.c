#include <stdio.h>
/**
 *wildcmp - compares two strings
 *@s1: pointer to the string 1
 *@s2: pointer to the string 2
 *Return: 1 if they are identical 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	printf("%s ------- %s\n", s1, s2);
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		else
			return (0);
	}
	else
	{
		if (*s1 == *s2)
		{
			return (wildcmp(++s1, ++s2));
		}
		else
		{
			if (*s1 == '*')
			{
				if (*(s1 + 1) == *s2)
					return (wildcmp(s1 += 2, s2 += 1));
				else
					return (wildcmp(s1, ++s2));
			}
			else
			{
				if (*s2 == '*')
				{
					if (*(s2 + 1) == *s1)
						return (wildcmp(s1 += 1, s2 += 2));
					else
						return (wildcmp(++s1, s2));
				}
				else
				{
					return (0);
				}
			}
		}
	}
}
