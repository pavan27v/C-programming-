#include<stdio.h>
int main()
{
  int var = 0x1B61F2E6;
  char *p;

  printf("value of var is %d(Hex %x), stored at %p\n", var, var, &var);
  
  /* let store the &var in char pointer to analyze byte by byte  value */
  p = (char*)&var;

  printf("value at %p is %x\n",p, *p);
  printf("value at %p is %x\n",p+1, *(p+1));
  printf("value at %p is %x\n",p+2, *(p+2));
  printf("value at %p is %x\n",p+3, *(p+3));


}
