#include <stdio.h>

/**
* main - prints string to stdout
*
* prints the alphabet to stdout
* Return: returns 0
*/
int main(void)
{
	/*define*/
	string alpha;
	int i;

	/*initialize*/
	alpha = "abcdefghijklmnopqrstuvwxyz";
	i = 0;

	while (i < 26)
	{
		putchar(alpha[i]);
	}
	return (0);
}
