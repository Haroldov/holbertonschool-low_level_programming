#include "variadic_functions.h"
void print_i(va_list s);
void print_f(va_list s);
void print_c(va_list s);
void print_s(va_list s);

/**
 *print_all - print all depending on the format
 *@format: the format of the following strings
 *Return: none
 */

void print_all(const char * const format, ...)
{
	fmt fmts[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	unsigned int i = 0, j = 0;
	void (*f)(va_list) = NULL;

	va_list(valist);
	va_start(valist, format);
	while (*(format + j) != '\0')
	{
		i = 0;
		while (fmts[i].c != NULL)
		{
			if (*(fmts[i].c) == *(format + j))
			{
				f = fmts[i].func_str;
				break;
			}
			else
			{
				f = NULL;
			}
			i++;
		}
		if (f != NULL)
		{
			f(valist);
		}
		j++;
	}
}

void print_i(va_list s)
{
	printf("%i\n", va_arg(s, int));
}

void print_c(va_list s)
{
	printf("%c\n", va_arg(s, int));
}

void print_f(va_list s)
{
	printf("%f\n", va_arg(s, double));
}

void print_s(va_list s)
{
	printf("%s\n", va_arg(s, char *));
}
