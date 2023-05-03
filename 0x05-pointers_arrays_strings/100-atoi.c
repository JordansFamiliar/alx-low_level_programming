#include "main.h"
#include <stdbool.h>

/**
* _atoi - converts a string to an int
* @s: first argument
* Return: integer
*/

int _atoi(char *s)
{
	int total, tens, digits, i, j, index, a;

	bool is_negative = false;

	total = digits = i = j = 0;
	tens = 1;
	index = -1;
	while (s[i])
	{
		if (s[i] == '-' && (s[i + 1] >= 48 && s[i + 1] <= 57))
			is_negative = true;
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (index == -1)
				index = i;
			j++;
		}
		else if (index != -1)
		{
			for (; index < i; index++)
			{
				for (a = j; a > 0; a--)
					tens *= 10;
				digits = s[index] - '0';
				total += digits;
				j--;
			}
			break;
		}
		i++;
	}
	if (is_negative)
		total = -total;
	return (total);
}
