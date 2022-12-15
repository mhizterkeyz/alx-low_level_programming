#include "main.h"
/**
 * print_most_numbers - does something
 *
 * Return: int
 */

void print_most_numbers(void)
{
	int l;

	l = 0;
	while (l < 10)
	{
		if (l != 2 && l != 4)
		{
			_putchar('0' + l);
		}
		l += 1;
	}
	_putchar('\n');
}
