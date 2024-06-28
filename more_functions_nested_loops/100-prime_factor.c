#include "main.h"
#include <stdio.h>

/**
 * main - calculate prime factors
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	int i, check = 0;
	int list[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

	while (check <= 2)
	{
		for (i = 0; i < 25; i++)
		{
			check++;
			if (n % list[i] == 0)
			{
				n = n / list[i];
				printf("%d, ", list[i]);
				check = 0;
			}
		}

	}
	printf("%ld\n", n);
return (0);
}
