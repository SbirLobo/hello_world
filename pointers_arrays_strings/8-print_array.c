#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	if (n < 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		(i == 0) ? printf("%d", *(a + i)) : printf(", %d", *(a + i));
	}
	printf("\n");
}
