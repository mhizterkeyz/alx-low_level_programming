#include "main.h"

/**
 * puts2 - does something
 * @str: char
 * Return: void
 */
void puts2(char *str)
{
	int pos;

	pos = 0;
	while (str[pos])
	{
		if (pos % 2 == 0)
		{
			_putchar(str[pos]);
		}
		pos += 1;
	}
	_putchar('\n');
}
