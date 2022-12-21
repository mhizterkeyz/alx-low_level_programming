#include "main.h"

/**
 * _strcmp - does something
 * @s1: param
 * @s2: param
 * Return: something
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int res;

	res = 0;
	i = 0;
	j = 0;
	while (s1[i])
	{
		i += 1;
	}

	while (s1[j])
	{
		j += 1;
	}

	if (j < i)
	{
		i = j;
	}

	j = 0;
	while (j <= i)
	{
		if (s1[j] != s2[j])
		{
			res = s1[j] - s2[j];
			break;
		}

		j += 1;
	}

	return (res);
}
