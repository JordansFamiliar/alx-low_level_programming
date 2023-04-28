#include "main.h"

/**
* more_numbers - prints 0 - 14
*
* Return: void
*/
void more_numbers(void)
{
	int a, j, i, x;

	for (a = 1; a <= 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
				x = i + '0';
			if (i > 9)
			{
				x = i / 10 + '0';
			}
			_putchar(x);
			if (i > 9)
			{
				j = i % 10 + '0';
				_putchar(j);
			}
		}
		_putchar('\n');
	}
}
