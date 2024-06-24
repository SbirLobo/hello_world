#include "main.h"

/**
 * swap_int - swap
 *
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
	int inst = *a;
	*a = *b;
	*b = inst;
}
