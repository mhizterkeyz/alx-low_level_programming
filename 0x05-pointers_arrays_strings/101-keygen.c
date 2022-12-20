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
	char str[19];
	int i;

	srand(time(0));
	for (i = 0; i < 18; i += 1)
	{
		str[i] = 'a' + rand() % 26;
	}
	str[18] = '\0';
	printf("%s\n", str);

	return (0);
}
