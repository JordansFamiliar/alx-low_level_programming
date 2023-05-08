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
		if (haystack[i] == needle[j])
		{
			index = i;
			j = 0;
			while (haystack[i] == needle[j] && needle[j])
			{
				i++;
				j++;
			}
			if (needle[j] != '\0')
			{
				i -= 1;
				continue;
			}
			if (needle[j] == '\0')
				return (haystack + index);
		}
		i++;
	}
	return (NULL);
}
