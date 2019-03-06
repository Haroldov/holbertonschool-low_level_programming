#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *argstostr - concatenates all the arguments
 *@ac: number of arguments
 *@av: double pointer to by arguments
 *Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *newstr;
	int tmp = 0;
	int i;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (tmp = 0; tmp != ac; tmp++)
	{
		for (i = 0; av[tmp][i] != '\0'; i++)
		{
			size++;
		}
		size++;
	}

	newstr = malloc(sizeof(char) * size);

	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}

	tmp = 0;
	size = 0;
	while (tmp != ac)
	{
		for (i = 0; av[tmp][i] != '\0'; i++)
			newstr[i + size] = av[tmp][i];
		newstr[i + size] = '\n';
		size += i + 1;
		tmp++;
	}
	newstr[i + size + 1] = '\0';

	return (newstr);

}
