#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *get_sum - get sum of all elements of a string
 *@str: string
 *Return: sum
 */

int get_sum(char *str)
{
	unsigned int i, sum = 0;

	for (i = 0; i < strlen(str); i++)
		sum += (unsigned int) str[i];
	return (sum);
}

/**
 *get_mul - get multiplication of all elemnts of a string
 *@str: string
 *Return: mul
 */

int get_mul(char *str)
{
	unsigned int i, sum = 1;

	for (i = 0; i < strlen(str); i++)
		sum *= (unsigned int) str[i];
	return (sum);
}

/**
 *get_greatest - get greatest char in a string
 *@str: string
 *Return: char
 */

int get_greatest(char *str)
{
	unsigned int i, buf = 0;

	for (i = 0; i < strlen(str); i++)
		if ((unsigned int) str[i] > buf)
			buf = (unsigned int) str[i];
	return (buf);
}

/**
 *get_f5 - get f5 operations for crackme5
 *@str: string
 *Return: result
 */

int get_f5(char *str)
{
	unsigned int i, buf = 0;

	for (i = 0; i < strlen(str); i++)
		buf += (unsigned int) str[i] * (unsigned int) str[i];
	return (buf);
}

/**
 *main - Entry point
 *@argc: No. arguments
 *@argv: arguments
 *Return: 1
 */

int main(int argc, char *argv[])
{
	(void) argc;
	unsigned int i, buf = 0;
	char *str;
	/*create table*/
	char letters[] = "kuoIKdhPr1aQ3FeZqxf6Wjm4+ULYcJGOtvzX5syVMnpgbiT2B9E0SNl78wDRHC-As4E{galf";
	/*create password*/
	char pass[7];

	srand((get_greatest(argv[1]) ^ 0xe));
	pass[0] = letters[0x3f - ((strlen(argv[1]) ^ 0x3b) & 0x3f)];
	pass[1] = letters[0x3f - ((get_sum(argv[1]) ^ 0x4f) & 0x3f)];
	pass[2] = letters[0x3f - ((get_mul(argv[1]) ^ 0x55) & 0x3f)];
	pass[3] = letters[0x3f - (rand() & 0x3f)];
	pass[4] = letters[0x3f - ((get_f5(argv[1]) ^ 0xef) & 0x3f)];
	str = argv[1];
	for (i = 0; i < (unsigned int) str[0]; i++)
		buf = rand();
	pass[5] = letters[0x3f - ((buf ^ 0xe5) & 0x3f)];
	pass[6] = '\0';
	printf("%s", pass);


	return (1);
}
