#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		largest = (a > c ? a : c);
		if (a == c)
			largest = a;
	}
	if (b > a)
	{
		largest = (b > c ? b : c);
		if (b == c)
			largest = b;
	}
	else if (a == b)
	{
		largest = (a > c ? a : c); /* if a > c then a is the largest */
		if (a == c) /* implies that a,b,c are equal */
			largest = a;
	}

	return (largest);
}
