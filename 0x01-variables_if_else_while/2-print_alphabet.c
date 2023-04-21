#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - prints string to stdout
*
* prints the alphabet to stdout
* Return: returns 0
*/
int main(void)
{
	/*define*/
	char a;

	/*initialize*/
	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
