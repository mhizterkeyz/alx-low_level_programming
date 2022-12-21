#include "main.h"

/**
 * _strcat - does something
 * @dest: param
 * @src: param
 * Return: something
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i += 1;
	}

	while (src[j])
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}

	dest[i] = '\0';
	return (dest);
}
