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
	int n = 18;
	char str[n + 1];
	int i;

	srand(time(0));
	for (i = 0; i < n; i += 1)
	{
		str[i] = 'a' + rand() % 26;
	}
	str[n] = '\0';
	printf("%s\n", str);

	return (0);
}
