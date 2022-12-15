#include "main.h"

/**
 * print_number - does something
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	if (n > 9)
	{
		print_number(n / 10);
	}

	_putchar('0' + n % 10);
}
