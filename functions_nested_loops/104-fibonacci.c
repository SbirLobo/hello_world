#include <stdio.h>
#include <unistd.h>

/**
 * main - program for alphabet printing
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int over, inst, count, i, big1 = 0, prev_big1 = 0;
	long int big2 = 1, prev_big2 = 1, base = 1000000000;

	for (i = 0; i < 97; i++)
	{
		if (big1 > 0)
		{
			printf("%ld", big1);
			for (count = base / 10; big2 / count < 1; count = count / 10)
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
		over = (big2 - big2 % base) / base;
		if (over > 0)
		{
			big2 -= over * base;
			big1 += over;
		}
	}
	printf("%ld%ld\n", big1, big2);
	return (0);
}
