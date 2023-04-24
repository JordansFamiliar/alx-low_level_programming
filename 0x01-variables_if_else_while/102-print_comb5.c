#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
*
* prints to stdout
*Return: 0 Success
*/
int main(void)
{
	int a, b, c, d, e, x;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; b < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					for (e = 1; e < 5; e++)
					{
						if (e == 3)
							x = c;
						if (e == 4)
						{
							x = d;
							e = 1;
							putchar(x % 10 + '0');
							if (a == 9 && b == 8 &&
							    c == 9 && c == 9)
								break;
							putchar(',');
							putchar(' ');
							break;
						}
						x = (e == 1) ? a : b;
						putchar(x % 10 + '0');
						if (e == 2)
							putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
