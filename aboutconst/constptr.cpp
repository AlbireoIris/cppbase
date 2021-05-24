#include<stdio.h>


int main()
{
  //const int a;
  int val;
  const int* ptr=&val;

  //ptr=&a;
  //*ptr=10;
  for(val=0;val<5;val++)
  {
    printf("*p = %d\n",*ptr);
  }
  return 0;
}
