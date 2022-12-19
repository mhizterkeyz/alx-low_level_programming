#include "main.h"

/**
 * _strlen - gets length of string
 * @c: char pointer
 * Return: int
 */
int _strlen(char *c)
{
	int len;

	len = 0;
	while (c[len])
	{
		len += 1;
	}

	return (len);
}

/**
 * print_rev - does something
 * @s: char
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len >= 0)
	{
		_putchar(s[len]);
		len -= 1;
	}
	_putchar('\n');
}
