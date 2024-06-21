#include <stdio.h>
#include <unistd.h>

/**
 * main - program for alphabet printing
 * Description: 'print natural'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	long int inst;
	long int big1 = 0;
	long int big2 = 1;
	long int prev_big1 = 0;
	long int prev_big2 = 1;
	long int base = 1000000000;
	long int over;
	int count = base;
	int nbchar = 0;

	while (i < 97)
	{
		if (big1 > 0)
		{
			printf("%ld", big1);
			nbchar = 0;
			count = base;
			while(count > 0)
			{
				if (big2 - count > 0)
				{
					count = count - count /10;
					nbchar++;
				}
			}
			for (count; count > 0; count--)
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

		i++;
	}
	printf("%ld%ld\n", big1, big2);
	return (0);
}
