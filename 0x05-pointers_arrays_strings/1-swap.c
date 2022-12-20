#include <stdio.h>

/**
 * swap_int - program that swaps
 * @a: swap integer
 * @b: swap integer
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
