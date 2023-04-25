#include "main.h"

/**
* times_table - prints the times table
*
* Return: void
*/
void times_table(void)
{
	int i, a, x, digit;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 10; a++)
		{
			x = i * a;
			if (x < 10 && a != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (x >= 10)
			{
				_putchar(' ');
				digit = x / 10 + '0';
				_putchar(digit);
				digit = x % 10 + '0';
				_putchar(digit);
			}
			else
				_putchar((x + '0'));
			if (a < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
