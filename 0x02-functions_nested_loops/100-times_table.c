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
 * print_times_table - prints the times table
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int a;
	int b;
	int res;

	for (a = 0; a <= n; a += 1)
	{
		for (b = 0; b < n; b += 1)
		{
			res = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (res < 10)
				{
					_putchar(' ');
				}
				if (res < 100)
				{
					_putchar(' ');
				}
			}
			print(res);
		}
		_putchar('\n');
	}
}
