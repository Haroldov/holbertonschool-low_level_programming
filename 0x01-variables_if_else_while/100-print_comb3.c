#include <stdio.h>

/**
 *main - the program prints 0..10
 *
 *Return: returns an int zero
 */

int main(void)
{
	int un, dec;

	for (dec = 48; dec <= 56; dec++)
	{
		for (un = dec + 1; un <= 57; un++)
		{
			putchar(dec);
			putchar(un);
			if (~((dec == 56) && (un == 57)) & 1)
			{
				putchar(',');
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
