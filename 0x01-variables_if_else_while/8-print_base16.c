#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i += 1)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
