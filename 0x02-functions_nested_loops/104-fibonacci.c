#include <stdio.h>
/**
 * main - does somethng
 *
 * Return: int
 */
int main(void)
{
	int i;
	double lst;
	double cur;
	double tmp;

	i = 2;
	lst = 1.0;
	cur = 2.0;

	printf("1, 2, ");

	while (i < 98)
	{
		tmp = cur;
		cur += lst;
		lst = tmp;

		printf("%.0f", cur);
		if (i < 97)
		{
			printf(", ");
		}

		i += 1;
	}
	printf("\n");

	return (0);
}
