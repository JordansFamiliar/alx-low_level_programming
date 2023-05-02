#include "main.h"
#include <stdlib.h>

/**
* rev_string - reverses a string
* @s: first argument
* Return: void
*/

void rev_string(char *s)
{
	int i, j;

	i = j = 0;

	while (s[i])
	{
		i++;
	}
	char *b = malloc(sizeof(char) * i + 1);
	b[i] = '\0';
	i--;

	for (; i >= 0; i--)
	{
		b[i] = s[i];
	}
	while (b[j])
	{
		s[j] = b[j];
		j++;
	}
	s[j] = '\0';

	free(b);
}
