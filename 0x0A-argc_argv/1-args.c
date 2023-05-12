#include <stdio.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: vector
 * Return: (0) Success
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
