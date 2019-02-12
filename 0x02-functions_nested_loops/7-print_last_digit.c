#include "holberton.h"
/**
 *print_last_digit - print the last digit of a number
 *@n: the number from which the last digit is extracted
 *Return: return the last digit of the number
 */

int print_last_digit(int n)
{
	int tmp;

	tmp = n % 10;
	if (tmp < 0)
		tmp *= -1;
	_putchar(tmp + '0');
	return (tmp);
}
