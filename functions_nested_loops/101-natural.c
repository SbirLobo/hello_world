#include <stdio.h>
#include <string.h>

/**
 * natural- program for alphabet printing
 * Description: 'print natural'
 */

void main(void)
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

}
