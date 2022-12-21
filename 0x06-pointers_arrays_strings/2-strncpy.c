#include "main..h"

/**
 * _strncpy - does somthing
 * @dest: param
 * @src: param
 * @n: param
 * Return: something
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i += 1;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i += 1;
	}

	return (dest);
}
