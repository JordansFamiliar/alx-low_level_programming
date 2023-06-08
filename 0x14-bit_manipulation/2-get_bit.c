#include "main.h"
#include <stdio.h>
/**
 * get_bit - a function that returns the value of a bit
 * at a given index
 * @n: number to be converted
 * @index: index of the digit to be printed
 * Return: value of the bit at index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index == 0)
		return (n & 1);
	if (n == 1)
		return (-1);
	return (get_bit(n >> 1, --index));
}
