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

	/*initialise*/
	i = 0;

	while (i <= 9)
	{
		if (i == 9)
		{
			printf("%d\n", i);
			i++;
		}
		else if (i != 9)
		{
			printf("%d", i);
			i++;
		}
	}

	return (0);
}
