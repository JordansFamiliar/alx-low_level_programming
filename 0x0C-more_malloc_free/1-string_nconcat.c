#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of elements
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, count = 1;

	for (i = 0; (s1 != NULL) && (s1[i]); i++)
		++count;
	for (i = 0; (s2 != NULL) && (s2[i]) && (i < n); i++)
		++count;
	s = malloc(sizeof(char) * count);
	if (s == NULL)
		return (s);
	for (i = 0, j = 0; (s1 != NULL) && (s1[i]); i++)
	{
		s[j] = s1[i];
		j++;
	}
	for (i = 0; (s2 != NULL) && (s2[i]) && (i < n); i++)
	{
		s[j] = s2[i];
		j++;
	}
	s[j] = '\0';
	return (s);
}
