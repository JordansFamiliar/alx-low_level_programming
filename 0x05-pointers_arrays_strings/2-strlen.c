#include "main.h"

/**
* _strlen - prints the lenght of a string
* @s: first argument
* Return: int
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}
