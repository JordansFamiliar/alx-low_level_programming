#include "main.h"
#include <stdbool.h>

/**
* _atoi - converts a string to an int
* @s: first argument
* Return: integer
*/

int _atoi(char *s)
{
	int a, i, j, index = -1;

	double total, tens, digits;

	bool is_negative = false;

	total = digits = i = j = 0;
	while (true)
	{
		if (s[i] == '-')
		{
			is_negative = (is_negative ? false : true);
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (index == -1)
				index = i;
			j++;
		}
		else if (index >= 0 && (s[i] < 48 || s[i] > 57))
		{
			j -= 1;
			for (; index < i; index++)
			{
				tens = 1;
				for (a = j; a > 0; a--)
					tens *= 10;
				digits = s[index] - '0';
				total += digits * tens;
				j--;
			}
			break;
		}
		if (s[i] == '\0')
			break;
		i++;
	}
	if (is_negative)
		total *= -1;
	return (total);
}
