#include "stdio.h"
#include "stdlib.h"
/* diff between %c and %d in printing a data type */
int main (void)
{
char diff = 'a';
printf("%c\n", diff);
printf("%d\n", diff);
return 0;
}
