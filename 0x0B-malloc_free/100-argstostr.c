#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: array of arguments
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0;
	char *s, *n = NULL;

	if (av == NULL || ac == 0)
		return (n);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			j++;
		x += j + 1;
	}
	s = malloc(sizeof(char) * x);
	x = 0;
	if (s == NULL)
		return (n);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			s[x] = av[i][j];
			j++;
			x++;
		}
		s[x] = '\n';
		x++;
	}
	return (s);
}
