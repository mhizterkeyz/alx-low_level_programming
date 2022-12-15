#include "main.h"
/**
 * print_square - does something
 * @n: integer
 * Return: int
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i += 1)
	{
		for (j = 0; j < size; j += 1)
		{
			_putchar('#');
		}
		if (i != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
