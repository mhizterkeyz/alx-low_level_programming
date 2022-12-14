#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strapnd - does something
 * @s1: param
 * @s2: param
 * Return: char
 */
char *strapnd(char *s1, char s2)
{
	int len = strlen(s1);
	char *res = malloc(sizeof(char) * (len + 2));
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		res[j] = s1[i];
		j += 1;
		i += 1;
	}
	res[j] = s2;
	res[j + 1] = '\0';
	return (res);
}

/**
 * strtow - does something
 * @str: param
 * Return: char
 */
char **strtow(char *str)
{
	char **res;
	char *tmp = "";
	char *empty = "";
	char *empty2 = " ";
	int i;
	int j = 0;
	int words = 0;
	int len;

	if (str == NULL || str == empty || str == empty2)
	{
		return (NULL);
	}
	len = strlen(str);
	res = malloc(sizeof(char *) * (len + 2));
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i += 1)
	{
		if (str[i] != ' ')
		{
			tmp = strapnd(tmp, str[i]);
		}
		else if (tmp != empty)
		{
			res[j] = tmp;
			words += 1;
			j += 1;
			tmp = "";
		}
	}
	if (tmp != empty)
	{
		res[j] = tmp;
		words += 1;
		j += 1;
	}
	res[j] = NULL;
	res = realloc(res, sizeof(char *) * words + sizeof(NULL));
	return (res);
}
