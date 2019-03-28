#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: number
 *@index: index of the bit
 *Return: bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if (index == 0)
		return (n & 1);
	else
		return(get_bit(n >> 1, --index));
}
