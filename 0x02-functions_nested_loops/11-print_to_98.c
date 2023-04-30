#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void convert_string(int);
/**
* print_to_98 - prints numbers to 98
* @n: first argument
* Return: void
*/
void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		while (n <= 98)
		{
			num = n;
			if (n < 0)
			{
				num = -(n);
				_putchar('-');
			}
			convert_string(num);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			num = n;
			convert_string(num);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
/**
* convert_string - converts number to char
* @n: first parameter
* Return: void
*/
void convert_string(int n)
{
	int j, i = 0;

	char *str = malloc(10 * sizeof(char));

	j = i;

	while (n >= 1)
	{
		str[i] = n % 10 + '0';
		i++;
		n /= 10;
	}
	str[i] = '\0';
	j = i - 1;

	while (j >= 0)
	{
		_putchar(str[j]);
		j--;
	}
	free(str);
}
