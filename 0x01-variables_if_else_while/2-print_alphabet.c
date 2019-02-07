#include <stdio.h>

/**
 *main - the program prints abc..z
 *
 *Return: returns an int zero
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
