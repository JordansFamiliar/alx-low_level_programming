#include "main.h"

/**
* strcmp - compares 2 strings
* @s1: frist string
* @s2: second string
* Return: int
*/

int strcmp(char *s1, char *s2)
{
	int i, retval = 0;

	for (i = 0; !(s1[i] == '\0' && s2[i] == '\0'); i++)
	{
		retval += s1[i] - s2[i];
	}
	return (retval);
}
