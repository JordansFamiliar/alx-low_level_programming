#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - prints to stdout
*
* prints last digit and conditions
* Return: returns 0
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n"
		       , n, last_digit);
	if (n == 0)
		printf("Last digit of %d is %d and is zero\n"
		       , n, last_digit);
	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
		       , n, last_digit);
	return (0);
}
