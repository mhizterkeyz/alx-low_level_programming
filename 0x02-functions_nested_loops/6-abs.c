#include "main.h"
/**
 * _abs - prints absolut value of int
 * @i: integer
 * Return: int
 */
int _abs(int i)
{
	int k;

	k = i;
	if (k < 0)
	{
		k *= -1;
	}

	return (k);
}
