#include <stdio.h>
/**
 * main -dereferencing pointers
 *
 * Return: Always 0
 */
int main(void)
{
	int k = 100;
	int *p = &k;
	printf("Value of k: %d\n", k);
	printf("Memory address of k: %p\n", &k);
	printf("Value of p: %p", p);
	printf("\n");
	*p = 200;
	printf("Value of k: %d\n", k);
	return 0;
}
