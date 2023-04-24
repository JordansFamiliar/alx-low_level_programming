#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
*
* Return: 0 Success
*/
int main(void)
{
	/* define */
	int a, b, c, d, x;

	/* init */
	a = 0;
	d = 1;
	x = 0;

	for (a; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				for (d; d < 4; d++)
				{
					if (d == 1)
						x = a;
					if (d == 2)
						x = b;
					if (d == 3)
						x = c;
					putchar((x % 10 + '0'));
					if (a  == 7 && b == 8 && c == 9)
					{
						putchar('\n');
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
