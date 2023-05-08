#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: substring
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = j = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (i);
}
