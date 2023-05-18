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
	unsigned int i, j, count = 0;

	for (i = 0; (s1 != NULL) && (s[i] != '\0'); i++)
		++count;
	for (i = 0; (i < n) && (s2 != NULL) && (s2[i] != '\0'); i++)
		++count;
	s = malloc(sizeof(char) * (++count));
	if (s == NULL)
		return (s);
	for (i = 0; i < count - 1; i++)
	{
		if (s1 == NULL || s1[i] == '\0')
		{
			for (j = 0; (j < n) && s2 != NULL; j++)
			{
				s[i] = s2[j];
				i++;
			}
			break;
		}
		s[i] = s1[i];
	}
	s[count - 1] = '\0';
	return (s);
}
