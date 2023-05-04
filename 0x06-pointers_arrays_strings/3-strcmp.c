#include "main.h"

/**
* _strcmp - compares 2 strings
* @s1: frist string
* @s2: second string
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int i, retval = 0;

	for (i = 0; !(s1[i] == '\0' && s2[i] == '\0'); i++)
	{
		retval = s1[i] - s2[i];
		if (retval == 0 || retval < 0 || retval > 0)
			break;
	}
	return (retval);
}
