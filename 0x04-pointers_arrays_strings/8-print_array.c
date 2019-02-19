#include <stdio.h>

/**
 *print_array - prints N elements of an array of int,followed by a new line
 *@a: pointer of the array where the numbers are
 *@n: number of elements of the array to be printed
 *Return: none
 */

void print_array(int *a, int n)
{
	unsigned int i;

	for (i = 0; i < (n - 1); i++)
		printf("%i, ", *(a + i));
	printf("%i\n", *(a + i));
}
