#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

__attribute__((constructor))
/**
 * call_print_line - calls the print_line function
 *
 * Return: void
 */
void call_print_line(void)
{
	print_line();
}
/**
 * print_line - prints a line before main
 *
 * Return: void
 */
void print_line(void)
{
printf("You're beat! and yet,you must allow,\nI bore my house upon my back!\n")
	;
}
