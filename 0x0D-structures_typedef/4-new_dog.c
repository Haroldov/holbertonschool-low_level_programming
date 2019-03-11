#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - creates a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	(*dog).name = name;
	(*dog).age = age;
	(*dog).owner = owner;

	return (dog);

}
