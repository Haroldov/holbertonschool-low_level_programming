#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins to make change for an amount of
 *money.
 *@argc: number of arguments
 *@argv: pointer to arguments
 *Return: 1 if error 0 if number negative
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int cont = 0;
	int tmp;
	int arr[] = {25, 10, 5, 2, 1};
	int sw = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		tmp = atoi(*(argv + 1));
		if (atoi(*(argv + 1)) < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			while (tmp != 0)
			{
				sw = 0;
				if (i == 4)
					i = 0;
				while (tmp % arr[i] == 0)
				{
					cont++;
					tmp -= arr[i];
					sw = 1;
					i++;
				}
				if (sw == 1)
					i = 0;
				if (tmp % 2 != 0)
				{
					tmp -= 1;
					cont++;
				}
			}
			printf("%i\n", cont);
			return (1);
		}
	}

}
