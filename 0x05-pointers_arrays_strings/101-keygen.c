#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - does something
 *
 * Return: int
 */
int main(void)
{
	char factory[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str[58];
	int i;

	srand(time(0));
	for (i = 0; i < 57; i += 1)
	{
		str[i] = factory[rand() % 62];
	}
	str[57] = '\0';
	printf("%s\n", str);

	return (0);
}
