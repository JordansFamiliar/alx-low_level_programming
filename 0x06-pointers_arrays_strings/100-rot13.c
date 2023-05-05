#include "main.h"

/**
* rot13 - encodes a string using rot13
* @s: string
* Return: char
*/

char *rot13(char *s)
{
	int i, j;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *r = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = j = 0;
	while (s[i])
	{
		j = 0;
		while (a[j])
		{
			if (s[i] == a[j])
			{
				s[i] = r[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
