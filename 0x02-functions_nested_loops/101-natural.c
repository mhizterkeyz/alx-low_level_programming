#include <stdio.h>
/**
 * main - does somethng
 *
 * Return: int
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 3; i < 1024; i += 1)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	retrun (0);
}
