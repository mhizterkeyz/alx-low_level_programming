#include "main.h"

/**
 * _atoi - does something
 * @s: param
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	int started = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}

		while (48 <= s[i] && s[i] <= 57)
		{
			started = 1;
			res = (res * 10) + (s[i] - '0');
			i += 1;
		}

		if (started)
		{
			break;
		}
		i += 1;
	}

	return (res * sign);
}
