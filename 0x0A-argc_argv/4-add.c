#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: vector
 * Return: (0) Success
 */
int main(int argc, char **argv)
{
	long int i, num, sum = 0;

	if (argc <= 1)
		return (1);
	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) || strcmp(argv[i], "0") == 0)
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
