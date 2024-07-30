/* sum of the digits of the number  */
#include<stdio.h>
int main()
{
  int num = 0;
   printf("enter the number to calculate the sum of the digits\n");
   scanf("%d" , &num);
   int sum = 0;
   while(num > 0)
   {
       sum += num % 10;
        num /= 10;
   }
  printf("sum = %d", sum);
}
