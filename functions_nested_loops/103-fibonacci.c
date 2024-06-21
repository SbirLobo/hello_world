#include <stdio.h>
#include <string.h>

/**
 * main - program for alphabet printing
 * Description: 'print natural'
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int cur = 1;
	long int prev = 1;
	long int inst;
	long int sum = 0;

	while (cur < 4000000)
	{
		if (cur % 2 == 0)
		{
			sum += cur;
		}
		inst = prev;
		prev = cur;
		cur += inst;
	}
	printf("%ld\n", sum);
	return (0);
}
