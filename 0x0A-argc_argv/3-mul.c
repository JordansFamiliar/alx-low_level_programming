#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: vector
 * Return: (0) Success
 */
int main(int argc, char **argv)
{
	long int x, y, i = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	i = x * y;
	printf("%ld\n", i);
	return (0);
}
