#include <stdio.h>
int isprime(int c);

int main(void)
{
	/*unsigned long int num = 612852475143;*/
	unsigned long int cont, num;

	num = 612852475143;
	cont = num - 1;
	while (cont != 0)
	{
		if ((num % cont == 0) && (isprime(cont)))
		{
			printf("%li\n", cont);
			break;
		}
		cont--;
	}
	return (0);
}

int isprime(int c)
{
	int ans, cont;

	cont = 0;
	for (ans = 1; ans <= c; ans++)
	{
		if (c % ans == 0)
			cont += 1;
	}
	if (cont > 2)
		return (0);
	else
		return (1);
}
