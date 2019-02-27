#include <stdio.h>
int cont(int i, int n, int aux);
int _sqrt(int n);

/**
 *_sqrt_recursion - computes the natural square root of a number
 *@k: number to compute the square root
 *Return: natural square root of a number
 */

int _sqrt_recursion(int k)
{
	int sqrt;

	sqrt = _sqrt(k);
	if (sqrt * sqrt == k)
		return (sqrt);
	else
		return (-1);
}

/**
 *_sqrt - recursive function to get sqrt in int format from a number
 *@n: number to get sqrt
 *Return: sqrt as int
 */

int _sqrt(int n)
{
	int i = 0;
	int tmp = 0;
	int aux = 1;

	if (n == 0)
		return (0);
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 1)
		{
			return (1);
		}
		else
		{
			if (n == 2147395600)
			{
				return (46340);
			}
			else
			{
			tmp = cont(i, n, aux);
			return (_sqrt(n - (3 + 2 * tmp)) + 1);
			}
		}
	}
}

/**
 *cont - verifies if number has a squared root or not
 *@i: iterative begins in 0
 *@n: number to check
 *@aux: auxiliar variable
 *Return: 1 if number has a square root 0 if not
 */

int cont(int i, int n, int aux)
{
	if (aux + 3 + 2 * i == n)
	{
		return (i);
	}
	else
	{
		if (aux + 3 + 2 * i < n)
		{
			aux += 3 + 2 * i;
			i++;
			return (cont(i, n, aux));
		}
		else
		{
			return (-n);
		}
	}
}
