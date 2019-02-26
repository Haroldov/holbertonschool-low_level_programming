#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *of integers.
 *@a: pointer to row zero.
 *@size: size of matrix.
 *Return: none
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sum += *(a + i);
	}
	printf("%i, ", sum);
	sum = 0;
	for (i = size - 1; i < (size * size) - 1; i += size - 1)
        {
                sum += *(a + i);
        }
	printf("%i\n", sum);
}
