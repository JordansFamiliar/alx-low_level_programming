#include <stdio.h>
#include <stdlib.h>

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

	/* initialise */
	i = 0;

	while (i < 9)
	{
		putchar(i);
		i++;
		if (i == 9)
			putchar('\n');
	}
	return (0);
}
