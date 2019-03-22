#include <stdio.h>
void printE(void) __attribute__ ((constructor));

/**
 *printE - print a special oracion
 *Return: none
 */

void printE(void)
{
        printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
