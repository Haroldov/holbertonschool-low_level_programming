#include <stdio.h>

/**
 *main - the program prints abc..Z
 *
 *Return: returns an int zero
 */

int main(void)
{
	char letter;
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
