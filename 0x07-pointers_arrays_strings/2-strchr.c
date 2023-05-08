#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string
* @c: character
* Return: char
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (s[i] == '\0')
		return (NULL);
	return (s + i);
}
