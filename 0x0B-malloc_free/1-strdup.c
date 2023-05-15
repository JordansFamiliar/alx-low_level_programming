#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: char *
 */
char *_strdup(char *str)
{
	char *a;
	int j, i = 0;

	while (str[i])
	{
		i++;
	}
	if (str == NULL)
		return (NULL);
	a = malloc(sizeof(char) * i);
	if (a == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		a[j] = str[j];
	}
	return (a);
}
