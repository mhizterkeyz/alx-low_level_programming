
#include <string.h>
#include "main.h"

/**
 * _print_it - prints stuff
 * @s: param
 * @p: param
 * Return: void
 */
void _print_it(char *s, int p)
{
	if (p < 0)
	{
		return;
	}
	_putchar(s[p]);
	_print_it(s, p - 1);
}

/**
 * _print_rev_recursion - does something
 * @s: param
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	_print_it(s, strlen(s) - 1);
	_putchar('\n');
}
