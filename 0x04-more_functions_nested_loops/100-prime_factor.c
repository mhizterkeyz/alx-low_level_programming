#include <math.h>
#include <stdio.h>

/**
 * is_prime - returns 1 if prime, 0 otherwise
 * @n: integer
 * Return: int
 */
int is_prime(int n)
{
	int i;

	if (n == 2) {
		return (1);
	}
	if (n < 2) {
		return (0);
	}

	for (i = 3; i < sqrt(n); i += 1)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}

/**
 * main - does something
 *
 * Return: int
 */
int main(void)
{
	int i;
	int largest_prime;

	i = 2;
	largest_prime = 0;
	while (i < sqrt(612852475143))
	{
		if (612852475143 % i == 0 && is_prime(i))
		{
			largest_prime = i;
		}
		i += 1;
	}

	printf("%d\n", largest_prime);
}
