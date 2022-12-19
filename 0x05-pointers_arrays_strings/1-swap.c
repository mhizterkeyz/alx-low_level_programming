#include "main.h"

/**
 * swap_int - swaps 2 numbers
 * @a: first number
 * @b: second number
 * Returns: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
