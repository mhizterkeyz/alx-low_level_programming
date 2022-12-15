#include "main.h"
/**
 * print_diagonal - does something
 * @n: integer
 * Return: int
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i += 1)
	{
		for (j = 0; j < i; j += 1)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i != n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
