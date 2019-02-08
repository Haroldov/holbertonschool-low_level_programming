#include <stdio.h>

/**
 *main - the program prints 0..10
 *
 *Return: returns an int zero
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
