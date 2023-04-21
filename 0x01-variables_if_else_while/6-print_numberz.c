#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - prints to stdout
*
* prints a list of numbers to stdout
* Return: 0
*/
int main(void)
{
	/* define variables */
	int i;
	int a;

	/* initialise */
	i = 0;

	while (i <= 9)
	{
		a = i % 10 + '0';
		putchar(a);
		if (i == 9)
			putchar('\n');
		i++;
	}
	return (0);
}
