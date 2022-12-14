#include "main.h"
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: int
 * Return: void
 */
void print_to_98(int n)
{
	int k;

	while (n < 99)
	{
		k = n;
		if (k < 0)
		{
			_putchar('-');
			k = -k;
		}

		if (k > 9)
		{
			_putchar('0' + k / 10);
		}

		_putchar('0' + k % 10);
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n += 1;
	}
}
