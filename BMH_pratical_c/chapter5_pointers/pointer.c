#include <stdio.h>

int main()
{
    int i = 10;
    int *ptr = &i ;
    
    int **ptr1 = &ptr;
    
    printf("i = %d , *ptr = %d , **ptr1 = %d \n",i, *ptr , **ptr1);

    return 0;
}
