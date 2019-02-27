/**
 *_pow_recursion - computes the value of x raised to the power of y.
 *@x: the base
 *@y: the exponent
 *Return: -1 if y is lower than 0. Otherwise will return the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		else
			return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
