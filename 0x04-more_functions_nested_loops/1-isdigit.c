#include "main.h"
/**
 * _isdigit - does something
 * @c: integer
 * Return: int
 */

int _isdigit(int c)
{
	int i;

	l = 0;
	while (l <= 9)
	{
		if (c == l)
		{
			return (1);
		}
		l += 1;
	}

	return (0);
}
