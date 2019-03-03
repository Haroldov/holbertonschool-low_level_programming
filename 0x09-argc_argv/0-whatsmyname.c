#include <stdio.h>

/**
 *main - prints its name, followed by a new line
 *@argc: number of arguments
 *@argv: pointer to arguments
 *Return: 1 if successful 0 otherwise
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *(argv));
	return (1);
}
