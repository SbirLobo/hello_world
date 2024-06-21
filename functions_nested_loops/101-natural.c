#include <stdio.h>
#include <string.h>

/**
 * main - program for alphabet printing
 * Description: 'print natural'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 1024;
	int sum = 0;
	int i;

	for (i = 0; i < n; i++)
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}

	printf("%d\n", sum);
	return (0);
}
