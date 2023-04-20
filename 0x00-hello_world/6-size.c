#include <stdio.h>

/**
* main - prints size of types
* Has no variables
*
* Prints the size of types to standard output
* Return: zero
*/
int main(void)
{
	printf("Size of a char: %s\n", sizeof(char));
	printf("Size of an int: %s\n", sizeof(int));
	printf("Size of a long int: %s\n", sizeof(long int));
	printf("Size of a long long int: %s\n", sizeof(long long int));
	printf("Size of a float: %s\n", sizeof(float));
	return (0);
}
