#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'description for betty requirement'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int size_of_a = sizeof(a);
	int i;
	int size_of_i = sizeof(i);
	long int li;
	int size_of_li = sizeof(li);
	long long int lli;
	int size_of_lli = sizeof(lli);
	float fi = 3.14159265359;
	int size_of_fi = sizeof(fi);


printf("Size of a char: %d byte(s)\n",size_of_a);
printf("Size of a int: %d byte(s)\n", size_of_i);
printf("Size of a long int: %d byte(s)\n", size_of_li);
printf("Size of a long long int: %d byte(s)\n", size_of_lli);
printf("Size of a float: %d byte(s)\n", size_of_fi);
return (0);
}

