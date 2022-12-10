#include <stdio.h>

/**
 * print_nums - does some printing bro
 * @i: integer
 * @j: integer
 *
 * Return: void
 */
void print_nums(int i, int j)
{
	int k;
	int l;
	/* int skip_point; */

	/* skip_point = 1; */

	for (k = i; k < 10; k += 1)
	{
		for (l = j + 1; l < 10; l += 1)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');
			putchar('0' + k);
			putchar('0' + l);
			if (!(i == 9 && j == 8 && k == 9 && l == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
		l = 0;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i += 1)
	{
		for (j = 0; j < 10; j += 1)
		{
			print_nums(i, j);
		}
	}

	putchar('\n');

	return (0);
}
