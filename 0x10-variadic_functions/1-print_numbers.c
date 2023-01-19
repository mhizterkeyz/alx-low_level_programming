#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - does something
 * @separator: param
 * @n: param
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int value;

	va_start(list, n);
	for (i = 0; i < n - 1; i += 1)
	{
		value = va_arg(list, int);
		printf("%d", value);
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	if (n)
	{
		value = va_arg(list, int);
		printf("%d\n", value);
	}
	va_end(list);
}
