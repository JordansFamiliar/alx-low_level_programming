#include "main.h"
#include <stdio.h>

void print_to_stdout(void);
/**
* main - Entry point
*
* Return: 0 Success
*/
int main(void)
{
	print_to_stdout();
	return (0);
}

/**
* print_to_stdout - prints a string to stdout
*
* Return: void
*/
void print_to_stdout(void)
{
	_putchar(95);
	_putchar(112);
	_putchar(117);
	_putchar(116);
	_putchar(99);
	_putchar(104);
	_putchar(97);
	_putchar(114);
	_putchar(10);
}
