#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "a b c d e f g h i j k l m n o p q r s t u v w x y z!\n";
	char *p;

	printf("%p", s);
	p = string_toupper(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
