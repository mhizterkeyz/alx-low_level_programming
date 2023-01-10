#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - does something
 * @s1: param
 * @s2: param
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	res = malloc(strlen(s1) + strlen(s2) + 1);
	i = 0;
	j = 0;

	if (res == NULL)
	{
		return (NULL);
	}

	while (s1[i])
	{
		res[j] = s1[i];
		i += 1;
		j += 1;
	}

	i = 0;

	while (s2[i])
	{
		res[j] = s2[i];
		i += 1;
		j += 1;
	}
	res[j] = '\0';

	return (res);
}
