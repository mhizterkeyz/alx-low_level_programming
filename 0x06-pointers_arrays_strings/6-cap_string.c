#include "main.h"

/**
 * cap_string - does something
 * @c: param
 * Return: char
 */
char *cap_string(char *c)
{
	int i = 0;
	int s[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
	int j;

	while (c[i])
	{
		j = 0;
		while (j < 13)
		{
			if ((i == 0 || c[i - 1] == s[j]) && (c[i] >= 'a' && c[i] <= 'z'))
			{
				c[i] -= 32;
			}
			j += 1;
		}
		i += 1;
	}

	return (c);
}
