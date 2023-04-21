#include <stdio.h>
#include <stdlib.h>

/**
* main - prints to stdout
*
* prints numbers to stdout
* Return: 0
*/
int main(void)
{
	/* define */
	int i;

	/* init */
	i = 0;

	while (i <= 9)
	{
		putchar((i % 10 + '0'));
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
