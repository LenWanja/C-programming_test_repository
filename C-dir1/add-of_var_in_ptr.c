#include <stdio.h>
/**
 * main - storing address of variable in a pointer
 *
 * Return: Always 0
 */
int main(void)
{
int k;
int *p;
k = 100;
p = &k;
printf("Memory address of k: %p\n", &k);
printf("Value of p: %p\n", p);
return 0;
}
