#include "main.h"

/**
 * _pow_recursion - prints the power of a number
 * @x: number 1
 * @y: number 2
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
