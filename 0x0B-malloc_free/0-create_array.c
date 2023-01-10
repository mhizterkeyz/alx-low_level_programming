#include <stdlib.h>
#include "main.h"

/**
 * create_array - does something
 * @size: param
 * @c: param
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(c) * size);
	unsigned int i = 0;

	while (i < size)
	{
		p[i] = c;
		i += 1;
	}

	return (p);
}
