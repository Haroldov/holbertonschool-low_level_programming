#include <stdio.h>

/**
 *print_to_98 - print the n integers numbers
 *@n: n number to be printed
 *Return: none
 */

void print_to_98(int n)
{
	int init;

	init = n;
	while (n != 98)
	{
		printf("%i, ", n);
		if (init > 98)
			n--;
		else
			n++;
	}
	printf("%i\n", n);
}
