#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat(NULL, "hola2", 3);
	printf("%s\n", concat);
        concat = string_nconcat(NULL, NULL, 250);
        printf("%s\n", concat);
        concat = string_nconcat("hola1", NULL, 250);
        printf("%s\n", concat);
        concat = string_nconcat("hola", "hola", 2323);
        printf("%s\n", concat);
	free(concat);
	return (0);
}
