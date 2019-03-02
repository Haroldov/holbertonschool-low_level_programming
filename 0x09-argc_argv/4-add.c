#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers.
 *@argc: number of arguments
 *@argv: pointer to arguments
 *Return: 1 if error, 0 if there is no argument
 *otherwise the addition
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (**(argv + i) >= '0' && **(argv + i) <= '9')
		{
			sum += atoi(*(argv + i));
			if (*(argv + i + 1) != NULL)
				i++;
			else
				break;
		}
		if (**(argv + i) <= '0' || **(argv + i) >= '9')
		{
			printf("Error\n");
			return (1);
		}
		printf("%i\n", sum);
		return (sum);
	}
}
