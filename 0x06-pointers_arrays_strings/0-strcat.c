#include "main.h"
#include <stdbool.h>

/**
* _strcat - concatenates 2 strings
* @dest: destination string
* @src: source string
* Return: char
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (true)
	{
		if (dest[i] == '\0')
		{
			while (src[j])
			{
				dest[i] = src[j];
				j++;
				i++;
			}
			dest[i] = src[j];
			break;
		}
		i++;
	}
	return (dest);
}
