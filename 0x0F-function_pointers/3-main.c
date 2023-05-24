#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: Array of comand-line arguments
 * Return: int
 */
int main(int argc, char **argv)
{
	int n, num1, num2;
	char *c = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((strcmp(c, "/") == 0 || strcmp(c, "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (strcmp(c, "+") != 0 && strcmp(c, "-") != 0 && strcmp(c, "*") != 0
	    && strcmp(c, "/") != 0 && strcmp(c, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	n = (*get_op_func(c))(num1, num2);
	printf("%d\n", n);
	return (0);
}
