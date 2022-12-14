#include "main.h"
/**
 * print_last_digit - prints last digit of arg
 * @arg: integer
 * Return: int
 */
int print_last_digit(int arg)
{
	int res;

	res = arg % 10;

	_putchar('0' + res);

	return (res);
}
