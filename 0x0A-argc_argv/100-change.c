#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: number of command-line arguments
 * @argv: vector
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	int count, num, i, c[] = {25, 10, 5, 2, 1};

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0 && strcmp(argv[1], "0") != 0)
	{
		printf("0\n");
	}
	else
	{
		num = atoi(argv[1]);
		while (num > 0)
		{
			for (i = 0; i < 5; i++)
			{
				if (num / c[i] >= 1)
				{
					count += (num / c[i]);
					num = num - (num / c[i]) * c[i];
					break;
				}
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
