#include <stdio.h>

/**
 *print_to_98 - print the n integers numbers
 *@n: n number to be printed
 *Return: none
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n != 98)
		{
			printf("%i, ", n);
			n++;
		}
		else
		{
			printf("%i\n", n);
			n++;
		}
	}
}
