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
 * puts_half - does something
 * @str: char
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int srt;

	len = _strlen(str);
	srt = len - (len / 2);

	while (srt < len)
	{
		_putchar(str[srt]);
		srt += 1;
	}
	_putchar('\n');
}
