#include <stdio.h>
/**
 * main - does somethng
 *
 * Return: int
 */
int main(void)
{
	int i;
	long lst;
	long tmp;
	long cur;

	lst = 1;
	cur = 2;

	for (i = 0; i < 50; i += 1)
	{
		printf("%ld, ", cur + lst);
		tmp = cur;
		cur += lst;
		lst = tmp;
	}

	return (0);
}
