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

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);

		c -= 1;
	}

	putchar('\n');

	return (0);
}
