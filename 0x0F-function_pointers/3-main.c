#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - does something
 * @argc: param
 * @argv: param
 * Return: int
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int ans;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		return (99);
	}
	ans = func(atoi(argv[1]), atoi(argv[3]));
	if (ans == '\0')
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", ans);
	return (0);
}
