#include "main.h"

/**
 * _strlen - gets length of string
 * @c: char pointer
 * Return: int
 */
int _strlen(char *c)
{
	int len;

	len = 0;
	while (c[len])
	{
		len += 1;
	}

	return (len);
}
