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
	int i = 0;

	while (i < 49)
	{
		printf("%ld, ", cur);
		inst = prev;
		prev = cur;
		cur += inst;
		i++;
	}
	printf("%ld\n", cur);
	return (0);
}
