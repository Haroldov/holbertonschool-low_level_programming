/**
 *factorial - computes the factorial of a given number.
 *@n: means factorial of n. (n!)
 *Return: factorial if n is greater or equal than zero, otherwise will return 1
 */

int factorial(int n)
{
	if (n >= 0)
	{
		if (n != 0)
			return (n * factorial(n - 1));
		else
			return (1);
	}
	else
	{
		return (-1);
	}
}
