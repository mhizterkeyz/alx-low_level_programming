#include "main.h"
/**
 * _islower - checks if char is lower
 * @c: integer
 * Return: int
 */
int _islower(int c)
{
	char z;

	z = 'a';
	while (z <= 'z')
	{
		if (z == c)
		{
			return (1);
		}

		z += 1;
	}

	return (0);
}
