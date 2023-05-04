#include "main.h"
#include <stdbool.h>

/**
* _strncat - concatenates 2 strings
* @dest: destination
* @src: source string
* @n: number of bytes to copy
* Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (true)
	{
		if (dest[i] == '\0')
		{
			for (; j < n; j++)
			{
				dest[i] = src[j];
				i++;
				if (src[j] == '\0')
					break;
			}
			break;
		}
		i++;
	}
	return (dest);
}
