#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strcpy(char *s);

/**
 *new_dog - creates a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpyName;
	char *cpyOwner;
	dog_t *dog;

	cpyName = _strcpy(name);
	if (cpyName == NULL)
	{
		free(cpyName);
		return (NULL);
	}
	cpyOwner = _strcpy(owner);
	if (cpyOwner == NULL)
	{
		free(cpyOwner);
		free(cpyName);
		return (NULL);
	}
	dog = malloc(sizeof(dog));
	if (dog == NULL)
	{
		free(cpyOwner);
		free(cpyName);
		free(dog);
		return (NULL);
	}
	(*dog).name = cpyName;
	(*dog).age = age;
	(*dog).owner = cpyOwner;

	return (dog);

}

/**
 *_strcpy - copy a string
 *@s: string to copy
 *Return: pointer to copy
 */

char *_strcpy(char *s)
{
	int i = 0;
	char *cpy;

	while (*(s + i))
		i++;
	i++;
	cpy = malloc(i * sizeof(char));
	for (; i != 0; i--)
		*(cpy + i) = *(s + i);
	*cpy = *s;

	return (cpy);
}
