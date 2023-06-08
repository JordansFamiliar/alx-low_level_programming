#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: converted number, or 0 if b contains any other chars
 * or b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' && b[i])
		i++;
	for (; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = (num << 1) | (b[i] - '0');
	}
	return (num);
}
