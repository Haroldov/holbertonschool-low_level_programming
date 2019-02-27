/**
 *_sqrt_recursion - computes the natural square root of a number
 *@n: number to compute the square root
 *Return: natural square root of a number
 */
int cont(int i, int n, int aux);
int _sqrt(int n);

int _sqrt_recursion(int k)
{
	int sqrt;

	sqrt = _sqrt(k);
	if (sqrt * sqrt == k)
		return (sqrt);
	else
		return (-1);
}

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
			tmp = cont(i, n, aux);
			if (tmp == 1)
				return (_sqrt(n - 1) + 1);
			else
				return (_sqrt(n - 1));
		}
	}
}

int cont(int i, int n, int aux)
{
	if (aux + 3 + 2 * i == n)
	{
		return (1);
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
			return (0);
		}
	}
}
