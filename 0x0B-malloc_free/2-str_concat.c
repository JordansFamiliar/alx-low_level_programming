#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, x;
	char *c;

	i = j = x = 0;
	while (s1[i])
		i++;
	i -= 1;
	while (s2[j])
		j++;
	x = i + j;
	c = malloc(sizeof(char) * x);
	if (c == NULL)
		return (NULL);
	for (i = 0; i <= x; i++)
	{
		if (s1[i] == '\0')
		{
			for (j = 0; j <= x; j++)
			{
				c[i] = s2[j];
				i++;
			}
		}
		c[i] = s1[i];
	}
	return (c);
}
