#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i += 1)
	{
		putchar('0' + i);
	}

	for (c = 'a'; c < 'g'; c += 1)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
