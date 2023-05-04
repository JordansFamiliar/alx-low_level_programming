#include "main.h"

/**
* cap_string - capitalizes words of a string
* @s: string
* Return: char
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == 9 || s[i] == 10 || s[i] == 32 || s[i] == 33
		    || s[i] == 34 || s[i] == 40 || s[i] == 41 || s[i] == 63
		    || s[i] == 123 || s[i] == 125 || s[i] == 46)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		if (i == 0 && s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
