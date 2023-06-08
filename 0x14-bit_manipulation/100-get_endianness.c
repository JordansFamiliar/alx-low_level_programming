#include "main.h"

/**
 * get_endianness - a function that checks the endiannes
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 0x0102;
	unsigned char *Ptr = (unsigned char *)&num;

	if (Ptr[0] > Ptr[1])
		return (1);
	return (0);
}
