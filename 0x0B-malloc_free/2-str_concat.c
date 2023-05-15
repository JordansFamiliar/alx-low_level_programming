#include "main.h"
#include <stdlib.h>

/**
 * ret_string - returns a pointer to a string
 * @a: string
 * Return: char *
 */
char *ret_string(char *a)
{
	int j, i = 0;
	char *s;

	while (a[i])
		i++;
	s = malloc(sizeof(char) * (i + 1));
	for (j = 0; j <= i; j++)
		s[j] = a[j];
	return (s);
}
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
	if (s1 == NULL && s2 != NULL)
		return (ret_string(s2));
	if (s2 == NULL && s1 != NULL)
		return (ret_string(s1));
	if (s1 == NULL && s2 == NULL)
	{
		c = malloc(sizeof(char) + 1);
		c[0] = '\0';
		return (c);
	}
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	x = i + j;
	c = malloc(sizeof(char) * (x + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; i <= x; i++)
	{
		if (s1[i] == '\0')
		{
			for (j = 0; s2[j] != '\0'; j++)
			{
				c[i] = s2[j];
				i++;
			}
			c[i] = '\0';
			break;
		}
		c[i] = s1[i];
	}
	return (c);
}
