#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: separator
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s = NULL;
	unsigned int i;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		if (separator == NULL || i == n)
			printf("%s", s);
		else
			printf("%s%s", s, separator);
	}
	printf("\n");
}
