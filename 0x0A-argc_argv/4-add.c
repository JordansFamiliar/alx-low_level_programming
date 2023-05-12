#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: vector
 * Return: (0) Success
 */
int main(int argc, char **argv)
{
	long int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) != 0)
			sum += atoi(argv[i]);
		else if (atoi(argv[i]) == 0 && strcmp(argv[i], "0") != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%ld\n", sum);
	return (0);
}
