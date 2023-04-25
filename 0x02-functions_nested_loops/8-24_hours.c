#include "main.h"

/**
* jack_bauer - prints minutes
*
* Return: void
*/
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar((a + '0'));
					_putchar((b + '0'));
					_putchar(58);
					_putchar((c + '0'));
					_putchar((d + '0'));
					_putchar('\n');
				}
			}
		}
		if (a == 2 && b == 3 && c == 5 && d == 9)
			break;
	}
}
