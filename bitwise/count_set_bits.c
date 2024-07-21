#include<stdio.h>
void count_no_of_set_bits1( int num )
{
   int pos =  ( sizeof(int) * 8 ) - 1;
   int count = 0;
   while( pos >= 0 )
  {
         if( ( num & ( 1 << pos ) ) !=  0)
	 {
                ++count;
	 }
	 --pos;
  }
   printf(" number of set bits = %d \n", count);
}
void count_no_of_set_bits2( int num )
{

    /***************************************************************
      start to check from the begining once the data become zero stop
      no need to check all the bits till the end


    ****************************************************************/
    int count = 0 ;
    while(  num  )
    {
     
	    if( num & 1)
             count++;
     
       num = num >> 1;
    }

    printf(" number of set bits = %d \n", count);
}
int main( )
{
	int num = 0;
	printf("enter the number to count number of set bits\n");
	scanf("%d", &num);

	// method 1 :check from the send of the data
	count_no_of_set_bits1( num );

	 // method 2 :check from the begining of the data
        count_no_of_set_bits2( num );
}
