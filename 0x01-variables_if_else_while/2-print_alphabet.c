#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';

	while (c < 'z')
	{
		putchar(c);

		c += 1;
	}

	putchar("\n");

	return (0);
}
