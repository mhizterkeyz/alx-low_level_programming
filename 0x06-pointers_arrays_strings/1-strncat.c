#include "main.h"

/**
 * _strncat - does something
 * @dest: param
 * @src: param
 * @n: param
 * Return: something
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i += 1;
	}

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}

	dest[i] = '\0';
	return (dest);
}
