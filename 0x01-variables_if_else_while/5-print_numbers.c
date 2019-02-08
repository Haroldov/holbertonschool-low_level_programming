#include <stdio.h>

/**
 *main - the program prints 0..10
 *
 *Return: returns an int zero
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%i", num);
	}
	putchar('\n');
	return (0);
}
