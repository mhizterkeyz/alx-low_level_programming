#include <stdio.h>
/**
 * main - does somethng
 *
 * Return: int
 */
int main(void)
{
	int i;
	int lst;
	int tmp;

	lst = 1;
	cur = 2;

	for (i = 0; i < 50; i += 1)
	{
		print("%d, ", cur + lst);
		tmp = cur;
		cur += lst;
		lst = tmp;
	}

	return (0);
}
