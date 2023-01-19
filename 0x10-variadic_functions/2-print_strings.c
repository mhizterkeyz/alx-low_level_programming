#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - does something
 * @separator: param
 * @n: param
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *value;

	va_start(list, n);
	for (i = 0; i < n - 1; i += 1)
	{
		value = va_arg(list, char *);
		if (value == NULL)
		{
			value = "nil";
		}
		printf("%s", value);
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	if (n)
	{
		value = va_arg(list, char *);
		if (value == NULL)
		{
			value = "nil";
		}
		printf("%s\n", value);
	}
	va_end(list);
}
