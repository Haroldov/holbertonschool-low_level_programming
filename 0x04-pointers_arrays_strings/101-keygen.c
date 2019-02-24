#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *
 *
 *
 */

int main(void)
{
	int key;

	srand(time(NULL));
	key = rand();
	printf("%i\n", key);
	return (key);
}
