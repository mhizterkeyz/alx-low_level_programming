#include "function_pointers.h"

/**
 * array_iterator - does something
 * @array: param
 * @size: param
 * @action: param
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i += 1)
	{
		action(array[i]);
	}
}
