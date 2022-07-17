#include <stdio.h>
/*
 * print with proper grammar, but the outcome is a piece of art, using variable char
 *return: Always 0
 */
int main (void)
/**
 * {
 *char* p = "with proper grammar, but the outcome is a piece of art,";
 *{
 *printf("%s", p);
 *printf("\n");
 *}
 *
 *printing with proper grammar, but the outcome is a piece of art, using an array
 * @k is an integer
 */
{
char a[55] = "with proper grammar, but the outcome is a piece of art,";
for (int k = 0; k <= 55; k++)
{
printf("%d", a[k]);
}
return 0;
}
