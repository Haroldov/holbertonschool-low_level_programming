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
			return (1);
		}
		else
		{
			cont = comp_min(tmp, arr, cont, i);
			printf("%i\n", cont);
			return (0);
		}
	}
}

/**
 *comp_min - compute the minimum number of coins
 *@tmp: temporal variable
 *@arr: pointer to the array of coins
 *@cont: counter of number of coins
 *@i: iterator
 *Return: 1 if error 0 if number negative
 */


int comp_min(int tmp, int *arr, int cont, int i)
{
			while (tmp != 0)
			{
				while (tmp > arr[i])
				{
					tmp -= arr[i];
					cont++;
					if (tmp == 0)
						break;
				}
				while (tmp % arr[i] == 0)
				{
					tmp -= arr[i];
					cont++;
					if (tmp == 0)
						break;
				}
				if (tmp % arr[i] != 0 && i < 3)
				{
					i++;
				}
				else
				{
					if (tmp != 0)
					{
						tmp--;
						cont++;
						i = 0;
					}
				}
			}
			return (cont);
}
