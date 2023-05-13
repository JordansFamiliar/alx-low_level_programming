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
	long int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
		else if ((atoi(argv[i]) == 0 && strcmp(argv[i], "0") != 0)
			 || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%ld\n", sum);
	return (0);
}
