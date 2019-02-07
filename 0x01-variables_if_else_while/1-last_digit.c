#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - the program checks the sign of a number
 *
 *Return: returns an int zero
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %i ", n);
	if (lastDigit > 5)
	{
		printf("is %i and is greater than 5\n", lastDigit);
	}
	else
	{
		if (lastDigit == 0)
		{
			printf("is %i and is 0\n", lastDigit);
		}
		else
		{
			if (lastDigit < 6)
				printf("is %i and is less than 6 and not 0\n", lastDigit);
		}
	}
	return (0);
}
