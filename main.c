#include <stdio.h>

int main(void)
{
 int a;
 printf("Input the second : ");
 scanf ("%i", &a);

 printf("Time is %i:%i\n", a/60, a%60);

 return 0;
}