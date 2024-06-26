#include "main.h"
#include <stdio.h>

/**
 * _arraylen - return length of array
 * @s: array
 * Return: int for response
 */
int _arraylen(int *s)
{
	int numberOfChar = 0;

	while (s[numberOfChar])
	{
		numberOfChar++;
	}
	return (numberOfChar);
}

/**
 * print_array - print n elements of an array
 * @a: array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;
	int lengthofarray = _arraylen(a);

	n = (n < lengthofarray) ? n : lengthofarray;

	printf("length: %d\tn: %d\n", lengthofarray, n);

	if (n < 0)
	{
		for (i = lengthofarray + n; i < lengthofarray; i++)
		{
			(i == lengthofarray - 1) ? printf("%d\n", *(a + i)) : printf("%d, ", *(a + i));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			(i == n - 1) ? printf("%d\n", *(a + i)) : printf("%d, ", *(a + i));
		}
	}

}
