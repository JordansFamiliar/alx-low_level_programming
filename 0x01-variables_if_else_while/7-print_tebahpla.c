#include <stdio.h>
#include <stdlib.h>

/**
* main - print to stdout
*
* prints reverse string to stdout
* Return: 0
*/
int main(void)
{
	/* define */
	char a;

	/* init */
	a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
