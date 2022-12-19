#include "main.h"

/**
 * rev_string - does something
 * @s: param
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[len])
	{
		len += 1;
	}

	for (i = 0; i < len / 2; i += 1)
	{
		char tmp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
