#include <stdio.h>
#include <string.h>

/**
 * main - program for alphabet printing
 * Description: 'print natural'
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int cur = 0;
	long int prev = 0;
	long int inst;
	int i;

	for (i = 0; i < 49; i++)
	{
		if (i == 0)
		{
			printf("%ld, ", cur);
			cur++;
		}
		else
		{
			printf("%ld, ", cur);
			inst = prev;
			prev = cur;
			cur += inst;
		}
	}
	printf("%ld\n", cur);
	return (0);
}
