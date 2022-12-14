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

	a = 0;
	b = 0;
	for (; a < 10; a += 1)
	{
		for (; b < 10; b += 1)
		{
			_putchar('0' + a * b);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
