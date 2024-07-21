#include<stdio.h>
void repressent_in_binary( int );
int main()
{
  int num = 0;
  printf("enter the number to represent in binary\n");
  scanf("%d", &num);

  repressent_in_binary(num);

}

 void repressent_in_binary(int num)
{
    int pos = (sizeof(int) * 8) - 1;

    while( pos >= 0 )
    {
	if(( num & ( 1 << pos ) ) >=  1)
	printf("1");
	else
	printf("0");

      --pos;
    }

}
