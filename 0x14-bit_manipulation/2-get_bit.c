#include "main.h"

/**
 * get_bit - a function that returns the value of a bit
 * at a given index
 * @n: number to be converted
 * @index: index of the digit to be printed
 * Return: value of the bit at index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
