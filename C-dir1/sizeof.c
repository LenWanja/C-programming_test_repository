#include <stdio.h>

/**
 * main-prints the size of various data types
 * Return: 0
 */
int main (void)
{
	int n;
	printf("size of a char: %ld byte\n", sizeof(char));
	printf("size of an int: %lu bytes\n", sizeof(int));
	printf("size of a float: %ld bytes\n", sizeof(float));
	printf("size of variable n on my computer: %lu bytes\n", sizeof(n));

	return 0;
}
