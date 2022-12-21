#include "main.h"

/**
 * reverse_array - does something
 * @a: param
 * @n: param
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i += 1)
	{
		int tmp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = tmp;
	}
}
