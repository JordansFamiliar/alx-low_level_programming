#include <stdio.h>
#include <stdlib.h>

/**
* main - prints to stdout
*
* prints base16 to stdout
* Return: 0
*/
int main(void)
{
	/* define */
	char i;

	/* init */
	i = '0';

	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
