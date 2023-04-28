#include "main.h"

/**
* more_numbers - prints 0 - 14
*
* Return: void
*/
void more_numbers(void)
{
	int a, b, j, i;

	for (a = 1; a <= 10; a++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
		for (j = 0; j <= 4; j++)
		{
			_putchar('1');
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
