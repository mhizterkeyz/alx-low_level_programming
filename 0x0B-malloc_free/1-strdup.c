#include <stdlib.h>
#include "main.h"

/**
 * _strdup - does something
 * @str: param
 * Return: char
 */
char *_strdup(char *str)
{
	char *dup = malloc(sizeof(str));
	int i = 0;

	if (str == NULL || dup == NULL)
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
