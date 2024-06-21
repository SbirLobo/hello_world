#include <stdio.h>
#include <unistd.h>

/**
 * main - program for alphabet printing
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int inst, count, i;
	long int big1, prev_big1 = 0;
	long int big2, prev_big2 = 1;
	long int base = 1000000000;

	for (i = 0; i < 97; i++)
	{
		if (big1 > 0)
		{
			printf("%ld", big1);
			count = base / 10;
			while (base / count < 1)
			{
				printf("0");
			}
		}
		printf("%ld, ", big2);
		inst = prev_big2;
		prev_big2 = big2;
		big2 += inst;
		inst = prev_big1;
		prev_big1 = big1;
		big1 += inst;
		if ((big2 - big2 % base) / base > 0)
		{
			big2 -= (big2 - big2 % base) / base * base;
			big1 += (big2 - big2 % base) / base;
		}
	}
	printf("%ld%ld\n", big1, big2);
	return (0);
}
