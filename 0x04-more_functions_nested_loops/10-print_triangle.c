#include "main.h"
/**
 * print_triangle - does something
 * @size: integer
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i += 1)
	{
		for (j = 0; j < size; j += 1)
		{
			if (j < size - 1 - i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		if (i != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
