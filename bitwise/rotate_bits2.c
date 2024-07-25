
#include <stdio.h>
#include<stdint.h>
void convert_to_binary(uint32_t data)
{
    uint32_t  pos = sizeof(int) * 8 - 1;
    
    int i = 0;
    
    for(i = pos ; i >= 0 ; --i)
    {
        if(data & (1 << i))
        printf("1");
        
        else
         printf("0");
         
         if( i%4 == 0)
         {
             printf(" ");
         }
    }
    
    
}
void  rotate_left(uint32_t data , uint32_t rotate)
{
    /*uint32_t temp, temp1 ;
    
    temp  =  data << rotate ;
    temp1 = data >> ( 32 - rotate) ;
    
     data = temp | temp1;*/
     
     
     
     
    
    convert_to_binary((data << rotate) | (data >> (sizeof(int) * 8  - rotate )));
}

void  rotate_right(uint32_t data , uint32_t rotate)
{
    /*uint32_t temp, temp1 ;
    
    temp  =  data << rotate ;
    temp1 = data >> ( 32 - rotate) ;
    
     data = temp | temp1;*/
     
     
    convert_to_binary( ( data >> rotate ) | (data << (sizeof(int) * 8  - rotate )));
}
int main()
{
    uint32_t data = 0xB000000A;
    uint32_t rotate = 3;
    convert_to_binary(data);
     printf("\n");
    rotate_left(data , rotate);
    
     printf("\n");
    rotate_right(data , rotate);

    return 0;
}
