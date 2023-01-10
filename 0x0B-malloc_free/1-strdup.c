#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - does something
 * @str: param
 * Return: char
 */
char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc(strlen(str) + 1);
	i = 0;

	if (dup == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		dup[i] = str[i];
		i += 1;
	}
	dup[i] = '\0';

	return (dup);
}
