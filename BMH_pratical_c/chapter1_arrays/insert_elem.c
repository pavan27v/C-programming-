#include<stdio.h>
#define max 100
void inset_at_position( int *arr , int pos , int n , int element)
{
     // index is one less than position
       int index = pos - 1 ;
       int i = 0;

       for(i = n ; i >= 0 ; --i)
       {
       	    if( index  == i )
	    {
               arr[i + 1] = arr[i];
	       arr[i] =  element;
	       break;
	    }
	  
           arr[ i + 1 ] = arr[i];
       }



}	
int main()
{
	int arr[max], i;
	int pos = 0, element = 0 , n;
        printf("enter the length of the array\n");
	scanf("%d" ,&n);
	printf("enter the elemetd into array\n");
	for(i = 0 ; i < n ; ++i){
	scanf("%d" ,&arr[i]);
        }
        printf("enter after which position you want to insert\n");
        scanf("%d" , &pos);
        
	printf("enter element you want to insert\n");    
        scanf("%d" , &element);


	inset_at_position(arr , pos , n - 1, element);

	printf("After the insert\n");
        for(i = 0 ; i <= n  ; ++i){
        printf(" %d" ,arr[i]);
        }
}
