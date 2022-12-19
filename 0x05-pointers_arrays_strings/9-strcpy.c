#include "main.h"

/**
 * _strcpy - does something
 * @dest: param
 * @src: param
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *_src = src;

	while(*_src != '\0')
	{
		*dest = *_src;
		dest++;
		_src++;
	}
	*dest = '\0';
	return (dest);
}
