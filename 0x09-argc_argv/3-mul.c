#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers.
 *@argc: number of arguments
 *@argv: pointer to arguments
 *Return: 1 if error, otherwise the multiplication
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		printf("%i\n", atoi(*(argv + 2)) * atoi(*(argv + 1)));
		return (atoi(*(argv + 2)) * atoi(*(argv + 1)));
	}
}
