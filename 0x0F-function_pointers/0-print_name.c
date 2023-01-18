#include "function_pointers.h"

/**
 * print_name - does something
 * @name: param
 * @f: param
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
