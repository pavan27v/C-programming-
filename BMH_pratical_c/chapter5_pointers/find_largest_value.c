#include<stdio.h>
#define MAX 100
int find_largest_element( int *arr , int n)
{
        /*  int *ptr = 0, *max = 0 , i;
	  ptr = max = arr;

	  // ptr to traverse the array
	  // max is pointing to first elemts

          // run loop till n elements

	  for( i = 0 ; i < n ; ++i)
	  {
	       if(*ptr > *max)
		max  = ptr;
               
	       ++ptr;
	  }

	 return (*max); */ 
         
	int  *max = 0 , i;
              max = arr;

          // ptr to traverse the array
          // max is pointing to first elemts

          // run loop till n elements

          for( i = 0 ; i < n ; ++i)
          {
               if(*arr > *max)
                max  = arr;

               ++arr;
          }

         return (*max);

}
int main()
{
  
	int arr[MAX] , n ;
       printf("How many elements are there\n");
       scanf("%d", &n);
       printf("read the elemts into array\n");
      // read elemts into array
        for(int i = 0 ; i < n ; ++i)
	 scanf("%d", &arr[i]);

       printf("max = %d" ,find_largest_element(arr , n));

}
