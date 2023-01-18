#include <stdio.h>
#include <stdlib.h>

/**
 * main - does something
 * @argc: param
 * @argv: param
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	int i;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	main_ptr = (unsigned char *)main;
	for (i = 0; i < num_bytes - 1; i += 1)
	{
		printf("%02x ", main_ptr[i]);
	}
	printf("%02x\n", main_ptr[i]);
	return (0);
}
