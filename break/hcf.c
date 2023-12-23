/************************************************************************************
usage of break within the loop 
usually for or while loop exit when the loop reach out of range or it will become false

but we can exit loop condition : if condition inside the loop is true (because the break is used inside the condition)

To find the HCF of two numbers 

************************************************************************************/
#include <stdio.h>
#define WITH_BREAK  0
int find_HCF(int a, int b, int min)
{
   #if WITH_BREAK
     printf("with break\n");
        int count = 0;
        for(count = min; count>=1; count--)
        {
          if((a%count == 0) && (b%count == 0))  
          {
              break;
          }
           
        }
         return count ;
   #else
       printf("with OUT break\n");
       min = (a > b) ? b : a; 
    
       while( (a%min != 0) || (b%min != 0)) {
          min--;
       }
       return min;
   #endif
}

int main()
{
    int a = 24, b = 36;
    int min = 0;
    
    min = a<b ? a : b;
    printf("HCF of a = %d and b = %d is %d",a,b,find_HCF(a, b, min));    
    return 0;
}
