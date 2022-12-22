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
		while((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))
		{
			if ((c[i] > 'm' && c[i] <= 'z') || (c[i] > 'M' && c[i] <= 'Z'))
			{
				c[i] -= 13;
				break;
			}
			c[i] += 13;
			break;
		}
		i += 1;
	}

	return (c);
}
