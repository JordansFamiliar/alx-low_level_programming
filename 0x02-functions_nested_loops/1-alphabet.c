#include <stdio.h>
#include "_putchar.c"

int _putchar(char);
void print_alphabet(void);

/**
* main - Entry point
*
* Return: 0 success
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
* print_alphabet - prints to stdout
*
* Return: void
*/
void print_alphabet(void)
{
	int i = 97;

	while (i <  123)
	{
		_putchar(i);
		if (i == 122)
		{
			_putchar('\n');
		}
		i++;
	}
}
