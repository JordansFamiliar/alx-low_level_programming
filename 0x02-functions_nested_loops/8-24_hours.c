#include "main.h"

/**
* jack_bauer - prints minutes
*
* Return: void
*/
void jack_bauer(void)
{
	char a, b, c, d;

	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 60; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
