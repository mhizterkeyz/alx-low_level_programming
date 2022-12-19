#include <stdio.h>
#include "main.h"

/**
 * print_array - does something
 * @a: array
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i += 1)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
