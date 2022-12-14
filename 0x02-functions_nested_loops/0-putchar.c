#include "main.h"
/**
 * main - prints _putchar\n
 * Return: (0)
 */

int main(void)
{
	char __putchar[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for(i = 0; i < 8; i += 1)
	{
		_putchar(__putchar[i]);
	}

	_putchar('\n');

	return(0);
}
