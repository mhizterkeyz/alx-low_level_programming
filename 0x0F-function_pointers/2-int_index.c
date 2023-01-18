#include "function_pointers.h"

/**
 * int_index - does something
 * @array: param
 * @size: param
 * @cmp: param
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i += 1)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
