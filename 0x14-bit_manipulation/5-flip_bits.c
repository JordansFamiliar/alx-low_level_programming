#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num = (n ^ m);

	while (num > 0)
	{
		if (num & 1)
			++count;
		num >>= 1;
	}
	return (count);
}
