#include "main.h"

/**
* leet - encodes a string
* @s: string
* Return: char
*/

char *leet(char *s)
{
	char *c = "AEOTLaeotl";
	char *n = "4307143071";
	int i, j;

	i = j = 0;
	while (s[i])
	{
		j = 0;
		while (c[j])
		{
			if (s[i] == c[j])
				s[i] = n[j];
			j++;
		}
		i++
	}
	return (s);
}
