/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
void convert_to_binary(uint32_t data)
{
    int pos = sizeof(int) * 8  - 1 ;
   for(int i = pos ;  i >= 0 ;  --i)
   {
       
       if( data & ( 1 << i) ){
       printf("1");
       }
       else{
       printf("0");
       }
       
        //if(i == 28 || i == 24 || i ==  20 || i == 16 || i == 12 || i == 8 || i == 4)
        
        // to get space every 4 digits
      
        if( ( i % 4 ) == 0  )
        {
            printf("  ");
        }
        
   }
    
}
void left_rotate( uint32_t data, uint32_t rotate)
{
     uint32_t temp , temp1 ;
     temp  =  (  data  << rotate ) ;
      printf("\n");
     convert_to_binary(data);
     
    temp1   =   (  data >> ( 32 - rotate ) );
     printf("\n\n");
     convert_to_binary(temp);
    
     data  = temp | temp1 ;
    
    printf("\n");
     convert_to_binary(data);
}

int main()
{
   uint32_t data;
   data = 0xA0000000;
   convert_to_binary(data);

   // number of bits to rotate to left
   uint32_t rotate = 3;
   
   left_rotate( data, rotate);
   

    return 0;
}

