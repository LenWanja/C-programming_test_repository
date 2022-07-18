#include <stdio.h>
void f(int *a)
/**
 * main - illustrating array type decay
 *
 * Return: Always 0
 */
int main(void)
{
int *p;
int t[10];

p = t;/*This works because of the auto implicit conversion to(int *) */
printf("t: %p\n", t);
printf("Memory address of t[0]: %p\n", &t[0]);
printf("p: %p\n", p);
f(t);
return 0;
}

/**
 * f - prints the value of a pointer of type int(void f(int *a)
 * @a: address of an integer we need to print
 *
 *Retur: Nothing
 */
void f(int *a)
{
printf("a: %p\n", a);
return;
}
