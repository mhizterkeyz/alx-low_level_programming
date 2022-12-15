#include <stdio.h>
#include <limits.h>
/**
 * main - does somethng
 *
 * Return: int
 */
int main(void)
{
	int i;
	long lst;
	long cur;
	long tmp;
	long lstRemainder;
	long curRemainder;
	long tmpRemainder;

	i = 2;
	lst = 1;
	cur = 2;
	lstRemainder = 0;
	curRemainder = 0;

	printf("1, 2, ");

	while (i < 98)
	{
		if (cur + lst < 0 || lstRemainder || curRemainder)
		{
			tmp = cur;
			tmpRemainder = curRemainder;
			cur = (cur + curRemainder + lst + lstRemainder) / LONG_MAX;
			curRemainder = (cur + curRemainder + lst + lstRemainder) % LONG_MAX;
			lst = tmp;
			lstRemainder = tmpRemainder;

			print("%lld", cur + curRemainder);
		}
		else
		{
			tmp = cur;
			cur += lst;
			lst = tmp;
			printf("%ld", cur);
		}
		if (i < 97)
		{
			printf(", ");
		}

		i += 1;
	}
	printf("\n");

	return (0);
}
