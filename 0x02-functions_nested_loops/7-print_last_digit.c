#include "holberton.h"
/**
 *print_last_digit - print the last digit of a number
 *@n: the number from which the last digit is extracted
 *Return: return the last digit of the number
 */

int print_last_digit(int n)
{
	int ld, tmp;

	if (n > 0)
		tmp = n;
	else
		tmp = -1 * n;
	ld = (tmp % 10) + 48;
	_putchar(ld);
	return (ld - 48);
}
