#include <stdio.h>

/**
 *main - the program prints abc..z except q and e
 *
 *Return: returns an int zero
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (~((letter != 'q') ^ (letter != 'e')) & 1)
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
