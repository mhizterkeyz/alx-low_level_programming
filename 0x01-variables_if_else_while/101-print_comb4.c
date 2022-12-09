#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i += 1)
	{
		for (j = i + 1; j < 10; j += 1)
		{
			for (k = j + 1; k < 10; k+= 1)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
		}
	}

	putchar('\n');

	return (0);
}
