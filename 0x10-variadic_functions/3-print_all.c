#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: an array of types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int check, i = 0;
	char c, *str;

	va_start(args, format);
	while (format && format[i])
	{
		check = 0;
		c = format[i];
		switch (c)
		{
		case 'c':
		{
			printf("%c", va_arg(args, int));
			check = 1;
		}
			break;
		case 'i':
		{
			printf("%d", va_arg(args, int));
			check = 1;
		}
			break;
		case 'f':
		{
			printf("%f", va_arg(args, double));
			check = 1;
		}
			break;
		case 's':
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			check = 1;
			printf("%s", str);
		}
		break;
		default:
			break;
		}
		if (format[i + 1] && check == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
