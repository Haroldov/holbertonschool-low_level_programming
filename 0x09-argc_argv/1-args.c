#define UNUSED(x) (void)(x)
#include <stdio.h>

/**
 *main - prints the number of arguments passed into it
 *@argc: number of arguments
 *@argv: pointer to arguments
 *Return: 1 if successful 0 otherwise
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%i\n", argc - 1);
	return (0);
}
