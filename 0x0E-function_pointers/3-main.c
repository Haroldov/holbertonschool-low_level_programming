#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - entry point
 *@argc: number of arguments passed
 *@argv: array of strings
 *Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*p)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	p = get_op_func(argv[2]);
	result = (*p)(num1, num2);
	printf("%i\n", result);
	return (0);

}
