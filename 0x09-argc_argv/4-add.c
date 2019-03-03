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
	int j = 0;
	int sum = 0;
	int sw = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i < argc && sw == 0)
		{
			j = 0;
			while (*(*(argv + i) + j) != '\0')
			{
				if (*(*(argv + i) + j) < '0' || *(*(argv + i) + j) > '9')
				{
					sw = 1;
					break;
				}
				else
				{
					j++;
				}

			}
			sum += atoi(*(argv + i));
			i++;
		}
		i--;
		if (sw == 1)
		{
			printf("Error\n");
			return (1);
		}
		printf("%i\n", sum);
		return (sum);
	}
}
