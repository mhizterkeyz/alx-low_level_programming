#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - does something
 * @ac: param
 * @av: param
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int size;
	char *res;

	if (ac < 1 || av == NULL)
	{
		return (NULL);
	}
	i = 0;
	size = 0;
	while (i < ac)
	{
		size += strlen(av[i]) + 1;
		i += 1;
	}
	res = malloc((size + 1) * sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (i < ac)
	{
		k = 0;
		while (k < strlen(av[i]))
		{
			res[j] = av[i][k];
			k += 1;
			j += 1;
		}
		res[j] = '\n';
		j += 1;
		i += 1;
	}
	res[j] = '\0';
	return (res);
}
