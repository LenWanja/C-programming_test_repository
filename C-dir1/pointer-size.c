#include <stdio.h>
/**
 *main - prints the size of a pointer in bytes
 *
 *Return: Always 0
 */
int main(void)
{
int *p; /*pointer to an integer*/
printf("size of pointer in bytes: %ld\n", sizeof(p));
return 0;
}
