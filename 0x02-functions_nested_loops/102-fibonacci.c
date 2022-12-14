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

	printf("1, 2, ");

	for (i = 2; i < 50; i += 1)
	{
		if (i >= 49)
		{
			printf("%ld\n", cur + lst);
			break;
		}
		printf("%ld, ", cur + lst);
		tmp = cur;
		cur += lst;
		lst = tmp;
	}

	return (0);
}
