#include "main.h"

/**
 * _puts - does something
 * @str: param
 * Return: void
 */
void _puts(char *str)
{
	int pos;

	pos = 0;
	while (str[pos])
	{
		_putchar(str[pos]);
		pos += 1;
	}
	_putchar('\n');
}
