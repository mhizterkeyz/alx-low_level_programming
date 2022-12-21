#include "main.h"

/**
 * leet - does something
 * @c: param
 * Return: char
 */
char *leet(char *c)
{
	int i = 0;
	char chars[] = {'a', 'e', 'o', 't', 'l'};
	char r[] = {'4', '3', '0', '7', '1'};
	int j;

	while (c[i])
	{
		j = 0;
		while (j < 5)
		{
			if (c[i] == chars[j] || c[i] + 32 == chars[j])
			{
				c[i] = r[j];
			}
			j += 1;
		}
		i += 1;
	}

	return (c);
}
