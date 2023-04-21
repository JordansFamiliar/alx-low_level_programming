#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - prints a string
*
* prints the alphabet to stdout
* Return: 0
*/

int main(void)
{
	/*define variables*/
	char a;
	char x;

	/*initialisation*/
	a = 'a';
	x = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
