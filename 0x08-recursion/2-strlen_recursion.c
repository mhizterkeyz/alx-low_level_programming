#include "main.h"

/**
 * _count_it - does something
 * @s: param
 * @c: param
 * Return: int
 */
int _count_it(char *s, int c)
{
	if (s[c] == '\0')
	{
		return c;
	}
	return _count_it(s, c + 1);
}

/**
 * _strlen_recursion - does something
 * @s: param
 * Return: int
 */
int _strlen_recursion(char *s)
{
	return _count_it(s, 0);
}
