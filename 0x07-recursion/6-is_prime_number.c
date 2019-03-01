int check_prime(int n, int i);

/**
 *is_prime_number - check if a number is prime
 *@n: number to be checked
 *Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	else
		return (check_prime(n, i));
}

/**
 *check_prime - auxiliar function to iterate i
 *@n: the number to be checked
 *@i: the iterator
 *Return: 1 if prime 0 otherwise.
 */

int check_prime(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
			return (0);
		else
			return (check_prime(n, ++i));
	}
	else
	{
		return (1);
	}
}
