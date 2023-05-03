#include "main.h"
#include <stdbool.h>

/**
* _atoi - converts a string to an int
* @s: first argument
* Return: integer
*/

int _atoi(char *s)
{
	int total, tens, digits, i, j, index;

	bool is_negative = false;

	total = digits = i = j = 0;
	tens = 1;
	index = -1;
	while (i <= (sizeof(s) / sizeof(char)))
	{
		if (s[i] == '-' && (s[i + 1] >= 48 && s[i + 1] <= 57))
			is_negative = true;
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (index < 0)
				index = i;
			j++;
		}
		else if (index >= 0 && (s[i] < 48 || s[i] > 57))
		{
			j -= 1;
			for (; index < i; index++)
			{
				for (int a = j; a > 0; a--)
					tens *= 10;
				digits = s[index] - '0';
				total += digits * tens;
				j--;
				tens = 1;
			}
			break;
		}
		i++;
	}
	if (is_negative)
		total *= -1;
	return (total);
}
