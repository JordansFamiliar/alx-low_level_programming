#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * mul - multiplies two positive integers
 * @v: array of arguments
 * Return: void
 */
void mul(char **v)
{
	int i, j, count1, count2, x, y;
	int last, *num1, *num2, *result;

	for (i = 0, count1 = 0; v[1][i]; i++)
		count1++;
	for (i = 0, count2 = 0; v[2][i]; i++)
		count2++;
	num1 = malloc(sizeof(int) * count1);
	num2 = malloc(sizeof(int) * count2);
	result = calloc(count1 + count2, sizeof(int));
	if (num1 == NULL || num2 == NULL || result == NULL)
		exit(1);
	for (i = 0; i < count1; i++)
		num1[i] = v[1][i] - '0';
	for (i = 0; i < count2; i++)
		num2[i] = v[2][i] - '0';
	for (i = count1 - 1, x = 0; i >= 0; i--)
	{
		for (j = count2 - 1, y = 0; j >= 0; j--)
		{
			result[x + y] += (num1[i] * num2[j]) % 10;
			result[x + y + 1] += (num1[i] * num2[j]) / 10;
			y++;
		}
		x++;
	}
	for (i = 0; i < count1 + count2 - 1; i++)
	{
		result[i + 1] += result[i] / 10;
		result[i] %= 10;
	}
	last = count1 + count2 - 1;
	while (last > 0 && result[last] == 0)
		last--;
	for (i = last; i >= 0; i--)
		printf("%d", result[i]);
	free(num1);
	free(num2);
	free(result);
}

/**
 * is_num - checks if numbers are valid
 * @c: number of arguments
 * @v: array of arguments
 * Return: bool
 */
bool is_num(int c, char **v)
{
	long int i, j;

	for (i = 1; i < c; i++)
	{
		for (j = 0; v[i][j] != '\0'; j++)
		{
			if (v[i][j] < 48 || v[i][j] > 57)
				return (false);
		}
	}
	return (true);
}
/**
 * main - Entry point
 * @argc: the number of comman-line arguments
 * @argv: array of command-line arguments
 * Return: 0 Success, otherwise failure
 */
int main(int argc, char **argv)
{
	if (argc != 3 || is_num(argc, argv) == false)
	{
		printf("Error\n");
		exit(98);
	}
	mul(argv);
	printf("\n");
	return (0);
}
