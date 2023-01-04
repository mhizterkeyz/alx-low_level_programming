#include "main.h"

/**
 * print - does something
 * @s: param
 * @p: param
 * Return: void
 */
void print(char *s, int p)
{
	if (!s[p])
	{
		return;
	}

	_putchar(s[p]);
	print(s, p + 1);
}

/**
 * _puts_recursion - does something
 * @s: param
 * Return: void
 */
void _puts_recursion(char *s)
{
	print(s, 0);
	_putchar('\n');
}
