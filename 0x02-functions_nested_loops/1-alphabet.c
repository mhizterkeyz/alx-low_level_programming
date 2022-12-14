#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);

		c += 1;
	}

	_putchar('\n');
}
