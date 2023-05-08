#include "main.h"
#include <stdio.h>

/**
* _strpbrk - searches a string for a set of bytes
* @s: string
* @accept: substring
* Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = j = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
