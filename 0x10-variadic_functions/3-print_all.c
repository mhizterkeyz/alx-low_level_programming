#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_list_item - does something
 * @c: param
 * @list: param
 * Return: void
 */
int print_list_item(char c, va_list list)
{
	int int_val;
	char c_val;
	char *char_val;
	double dbl_val;

	switch (c)
	{
		case 'i':
			int_val = va_arg(list, int);
			printf("%i", int_val);
			return (1);
		case 'f':
			dbl_val = va_arg(list, double);
			printf("%f", dbl_val);
			return (1);
		case 's':
			char_val = va_arg(list, char *);
			if (char_val == NULL)
			{
				char_val = "nil";
			}
			printf("%s", char_val);
			return (1);
		case 'c':
			c_val = va_arg(list, int);
			printf("%c", c_val);
			return (1);
	}
	return (0);
}

/**
 * print_all - does something
 * @format: param
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int hit = 0;

	va_start(list, format);
	while (format[i])
	{
		if (hit)
		{
			printf(", ");
			hit = 0;
		}
		hit = print_list_item(format[i], list);
		i += 1;

	}
	printf("\n");
	va_end(list);
}
