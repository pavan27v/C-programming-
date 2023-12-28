#include <stdio.h>
int main() 
{
   int a = 10;
   float b = 2.1;
   float c = 2.1f;

   printf("Is a equal to 10 %d\n", a == 10);
   printf("Is a equal to 15 %d\n", a == 15);
   printf("Is a equal to b  %d\n", a == b);
   printf("Is b equal to 2.1 double %d\n", b == 2.1);
   printf("Is c equal to 2.1 float %d\n", c == 2.1f);
   printf("b = %f",b);

   return 0;
}
