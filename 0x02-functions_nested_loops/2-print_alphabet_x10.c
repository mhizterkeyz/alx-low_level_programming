#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	c = 'a';
	i = 0;
	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);

			c += 1;
		}

		_putchar('\n');
		c = 'a';
		i += 1;
	}
}
