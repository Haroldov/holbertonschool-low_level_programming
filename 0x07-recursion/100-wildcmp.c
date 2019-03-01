/**
 *wildcmp - compares two strings
 *@s1: pointer to the string 1
 *@s2: pointer to the string 2
 *Return: 1 if they are identical 0 otherwise
 */

int get_as(char *s, int i);

int wildcmp(char *s1, char *s2)
{
	int len = 0;

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
			len = get_as(s1, 0);
			if (*s1 == '*')
			{
				if (*(s1 + len) == *s2)
					return (wildcmp(s1 += 2, s2 += 1));
				else
					return (wildcmp(s1, ++s2));
			}
			else
			{
				len = get_as(s2, 0);
				if (*s2 == '*')
				{
					if (*(s2 + len) == *s1)
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

int get_as(char *s, int i)
{
	if (i != '*')
		return (i);
	else
		return (get_as(s, ++i));
}
