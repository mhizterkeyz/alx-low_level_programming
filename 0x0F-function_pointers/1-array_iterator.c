#include "function_pointers.h"

/**
 * array_iterator - does something
 * @array: param
 * @size: param
 * @action: param
 * Return: void
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size; i += 1)
	{
		action(array[i]);
	}
}
