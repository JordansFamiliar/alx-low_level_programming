#include "main.h"

/**
* _strcmp - compares 2 strings
* @s1: frist string
* @s2: second string
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int i, retval;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			retval =  s1[i] - s2[i];
		}
	}
	if (s1[i] == s2[i])
	{
		retval = 0;
	}
	else if (s1[i] == '\0')
	{
		retval = -s2[i];
	}
	else
	{
		retval = s1[i];
	}
	return (retval);
}
