#include "main.h"

/**
 * rot13 - does something
 * @c: param
 * Return: char
 */
char *rot13(char *c)
{
	int i = 0;

	while (c[i])
	{
		if ((c[i] > 'm' && c[i] <= 'z') || (c[i] > 'M' && c[i] <= 'Z'))
		{
			c[i] -= 13;
		}
		else if ((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'M'))
		{
			c[i] += 13;
		}
		i += 1;
	}

	return (c);
}
