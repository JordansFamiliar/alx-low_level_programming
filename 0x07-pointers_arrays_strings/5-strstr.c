#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring
* @haystack: string
* @needle: substring
* Return: char
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, index;

	i = j = 0;
	while (haystack[i])
	{
		j = 00;
		if (haystack[i] == needle[j])
		{
			index = i;
			while (haystack[i] == needle[j] && needle[j])
			{
				i++;
				j++;
			}
			if (needle[j] != '\0')
			{
				continue;
			}
			if (needle[j] == '\0')
				return (haystack + index);
		}
		i++;
	}
	return (NULL);
}
