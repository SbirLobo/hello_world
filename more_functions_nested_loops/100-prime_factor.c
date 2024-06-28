#include "main.h"
#include <stdio.h>

/**
 * main - calculate prime factors
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	int i = 2, j = 2;
	int prem = 1;

	while (n != 1)
	{
		for (j = 2; j < i; j++)
			if (i % j == 0)
			{
				prem = 0;
				break;
			}
		if (prem == 0)
		{
			i++;
			prem = 1;
		}
		if (prem == 1)
		{
			if (n % i == 0)
			{
				n = n / i;
				if (n == 1)
					printf("%d\n", i);
			}
			else
				i++;

		}
	}

return (0);
}
