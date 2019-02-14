#include <stdio.h>
int isprime(int c);

int main(void)
{
	/*unsigned long int num = 612852475143;*/
	unsigned long int cont, num, tmp;

	num = 612852475143;
	cont = num;
	tmp = 2;
	while (cont != 1)
	{
		if ((cont % tmp == 0) && (isprime(tmp)))
		{
			cont = cont / tmp;
			if (cont != 1)
				tmp = 2;
		}
		else
		{
			tmp++;
		}
	}
	printf("%li\n", tmp);
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
