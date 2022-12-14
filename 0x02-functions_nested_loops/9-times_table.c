#include "main.h"
/**
 * times_table - prints the times table
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int res;

	for (a = 0; a < 10; a += 1)
	{
		for (b = 0; b < 10; b += 1)
		{
			res = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res < 10)
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + res);
			}
			else
			{
				putchar('0' + res / 10);
				putchar('0' + res % 10);
			}
		}
		putchar('\n');
	}
}
