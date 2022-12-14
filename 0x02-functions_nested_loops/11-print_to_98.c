#include "main.h"
/**
 * print - prints long int with putchar
 * @n: long int
 * Return: void
 */
void print(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: int
 * Return: void
 */
void print_to_98(int n)
{
	int c;

	c = n > 98;

	while (n != 98)
	{
		print(n);
		_putchar(',');
		_putchar(' ');
		n += c ? -1 : 1;
	}
	print(98);
	_putchar('\n');
}
