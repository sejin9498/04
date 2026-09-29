#include <stdio.h>

int main(void)
{
 int a, b;
 printf("Input two integers:");
 scanf("%i %i", &a, &b);
 
int c;
 c = a + b;
 printf("%i + %i = %i\n", a, b, c);

 c = a - b;
 printf("%i - %i = %i\n", a, b, c);
 
 c = a * b;
 printf("%i * %i = %i\n", a, b, c);
 
 c = a / b;
 printf("%i / %i = %i\n", a, b, c);
 
 c = a % b;
 printf("%i %% %i = %i\n", a, b, c);
 

 return 0;
}