#include "variadic_functions.h"

/**
 *print_strings -  prints strings, followed by a new line.
 *@separator: separator between numbers
 *@n: number of strings
 *Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(valist);
	if (n != 0)
	{
		va_start(valist, n);
		for (i = 0; i < n - 1; i++)
		{
			if (separator != NULL)
				printf("%s%s", va_arg(valist, char *), separator);
			else
				printf("%s%p", va_arg(valist, char *), separator);
		}
		printf("%s\n", va_arg(valist, char *));
		va_end(valist);

	}
	else
	{
		printf("\n");
	}
}
