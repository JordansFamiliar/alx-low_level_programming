#include <stdio.h>
#include <stdlib.h>

/**
* main - prints to stdout
*
* prints numbers to stdout
* Return: returns 0
*/
int main(void)
{
	/*define variables*/
	int i;
	char n;

	/*initialise*/
	i = 0;
	n = '\n';

	while (i < 10)
	{
		printf("%d", i);
		if (i == 9)
			printf("%d", n);
		i++;
	}

	return (0);
}
