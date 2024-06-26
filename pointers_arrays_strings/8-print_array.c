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

	for (i = 0; i < n; i++)
	{
		(i == n - 1) ? printf("%d\n", a[i]) : printf("%d, ", a[i]);
	}

}
