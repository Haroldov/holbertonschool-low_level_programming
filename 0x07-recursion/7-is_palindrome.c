int get_length(char *s, int i);
int compare_s(char *s, int i, int len);

/**
 *is_palindrome - check if a string is a palindrome or not
 *@s: string to be checked
 *Return: 1 if palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;
	int i = 0;

	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		len = get_length(s, i);
		i = len;
		return (compare_s(s, i, len));
	}
}

int get_length(char *s, int i)
{
	if (*(s + i) == '\0')
		return (--i);
	else
		return (get_length(s, ++i));
}

int compare_s(char *s, int i, int len)
{
	if (*(s + i) == *(s + (len - i)))
	{
		if (i == len/2)
			return (1);
		return (compare_s(s, --i, len));
	}
	else
	{
		return (0);
	}
}
