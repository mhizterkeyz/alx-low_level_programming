#include "main.h"

/**
 * string_toupper - does something
 * @c: param
 * Return: char
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
		i += 1;
	}

	return (c);
}
