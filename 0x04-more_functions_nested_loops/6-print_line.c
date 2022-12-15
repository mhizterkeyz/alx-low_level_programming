#include "main.h"
/**
 * print_line - does something
 * @n: integer
 * Return: int
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i += 1;
	}
	_putchar('\n');
}
