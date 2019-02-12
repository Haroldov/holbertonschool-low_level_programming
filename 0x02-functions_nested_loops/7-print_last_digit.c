#include "holberton.h"

int print_last_digit(int n)
{
	int ld, tmp;

	tmp = _abs(n);
	ld = (tmp % 10) + 48;
	_putchar(ld);
	return (ld - 48);
}
