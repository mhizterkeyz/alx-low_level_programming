#include "main.h"

/**
 * _strcpy - does something
 * @dest: param
 * @src: param
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int pos = 0;

	while (*src != '\0')
	{
		*(dest + pos) = *src;
		src++;
		pos += 1;
	}

	return (dest);
}
