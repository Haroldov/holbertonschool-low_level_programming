#include <stdio.h>
#include <stdlib.h>
char **alloc_grid(int width, int height);


/**
 *strtow -  splits a string into words
 *@str: string to be splitted
 *Return: pointer to string
 */

char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int sizec = 0;
	int sizer = 0;
	char **strarr;

	while (str[i] != '\0')
	{
		while (str[j] != ' ')
		{
			j++;
			i++;
		}
		if (j > sizec)
			sizec = j;
		else
			j = 0;
		if (str[i - 1] >= 'a' || str[i - 1] <= 'z')
			sizer++;
		i++;
	}

	strarr = alloc_grid(sizec, sizer);

	printf("WORDS = %i | MAX WORD = %i", sizer, sizec);

	return (strarr);
}

/**
 *alloc_grid - creates a 2 dimensional array of integers
 *@width: width of the array
 *@height: height of the array
 *Return: a pointer to a 2 dimensional array of integers
 */

char **alloc_grid(int width, int height)
{
	char *tmp;
	char **arr;
	int i;
	int size = width * height;

	if (width <= 0 || height <= 0 || size <= 0)
		return (NULL);

	tmp = (char *) malloc(size * sizeof(char));
	arr = (char **) malloc(height * sizeof(char *));

	if (arr == NULL || tmp == NULL)
	{
		free(arr);
		free(tmp);
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		tmp += i * width;
		arr[i] = tmp;
		tmp = arr[0];
	}

	tmp = arr[0];

	for (i = 0; i < size; i++)
		tmp[i] = 0;
	return (arr);
}
