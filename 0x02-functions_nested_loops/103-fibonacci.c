#include <stdio.h>
/**
 * main - does somethng
 *
 * Return: int
 */
int main(void)
{
	long lst;
	long cur;
	long tmp;
	long sum;

	lst = 1;
	cur = 2;
	sum = 2;

	while(cur <= 4000000)
	{
		tmp = cur;
		cur += lst;
		lst = tmp;
		if (cur % 2 == 0)
		{
			sum += cur;
		}
	}

	printf("%ld\n", sum);

	return (0);
}
