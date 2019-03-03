#include <stdio.h>

/**
 *main - prints its name, followed by a new line
 *@argc: number of arguments
 *@argv: pointer to arguments
 *Return: 1 if successful 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (1);
}
