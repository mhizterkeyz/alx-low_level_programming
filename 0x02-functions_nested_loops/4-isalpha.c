#include "main.h"
/**
 * _isalpha - checks if a char is alpha
 * @c: integer
 * Return: int
 */

int _isalpha(int c)
{
	char alpha;
	char maxAlpha;
	int i;

	alpha = 'a';
	maxAlpha = 'z';
	i = 0;
	while (i < 2)
	{
		while (alpha <= maxAlpha)
		{
			if (alpha == c)
			{
				return (1);
			}

			alpha += 1;
		}
		alpha = 'A';
		maxAlpha = 'Z';
		i += 1;
	}

	return (0);
}
