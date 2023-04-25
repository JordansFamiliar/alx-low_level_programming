#include "main.h"

/**
* times_table - prints the times table
*
* Return: void
*/
void times_table(void)
{
	char i, a, x;

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
			_putchar(x);
			_putchar(',');
		}
		_putchar('\n');
	}
}
