#include "main.h"
/**
 * _isupper - does something
 * @c: integer
 * Return: int
 */

int _isupper(int c)
{
	char l;

	l = 'A';
	while (l <= 'Z')
	{
		if (c == l)
		{
			return (1);
		}
		l += 1;
	}

	return (0);
}
