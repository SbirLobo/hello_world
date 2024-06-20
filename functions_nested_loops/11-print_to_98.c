#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - program for alphabet printing
 *
 * Description: 'print alphabet in lowercase'
 *
 * @n: 1er int
 *
 * Return: 1 if lowercase, 0 in other cases
 */

void print_to_98(int n)
{
	int inc_or_dec = 1;

	if (n > 98)
	{
		inc_or_dec = -1;
	}

	while (n != 98)
	{
		printf("%d, ", n);
		n += inc_or_dec;
	}
	printf("%d\n", 98);
}
