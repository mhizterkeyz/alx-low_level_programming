#include "main.h"
/**
 * jack_bauer - prints each minute in 24 hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 3; i += 1)
	{
		for (j = 0; j < 10; j += 1)
		{
			if (i >= 2 && j >= 4)
			{
				break;
			}
			for (k = 0; k < 6; k += 1)
			{
				for (l = 0; l < 10; l += 1)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
