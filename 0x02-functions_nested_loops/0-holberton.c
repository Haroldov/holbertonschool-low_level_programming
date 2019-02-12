#include "holberton.h"

/**
 *main - This code displays the word Holberton in terminal
 *
 *Return: 0 means succesful
 */

int main(void)
{
	char word[] = "Holberton\n";
	int i = 0;

	while (i < 10)
	{
		_putchar(word[i]);
		i++;
	}
	return (0);
}
