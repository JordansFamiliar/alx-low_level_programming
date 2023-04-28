#include "main.h"

/**
* more_numbers - prints 0 - 14
*
* Return: void
*/
void more_numbers(void)
{
	int i, a, b;

	for (i = 1; i <= 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a < 10)
				b = a % 10;
			if (a == 10)
				b = (a + 1) % 10;
			_putchar(b + '0');

			if (a >= 10)
			{
				b = a % 10;
				_putchar(b + '0');
			}
		}
		_putchar('\n');
	}
}
