#include "main.h"
#include <stdlib.h>

/**
* rev_string - reverses a string
* @s: first argument
* Return: void
*/

void rev_string(char *s)
{
	char *b;

	int i, j;

	i = j = 0;

	while (s[i])
	{
		i++;
	}
	b = malloc(sizeof(char) * (i + 1));
	b[i] = '\0';
	i--; 
	for (; i >= 0; i--)
	{
		b[j] = s[i];
		j++;
	}
	s[j] = '\0';
	j--;
	for (; j >= 0; j--)
	{
		s[j] = b[j];
	}

	free(b);
}
