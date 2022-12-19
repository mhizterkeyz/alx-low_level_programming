#include "main.h"

/**
 * _strcpy - does something
 * @dest: param
 * @src: param
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
