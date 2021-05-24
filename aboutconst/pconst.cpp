#include<stdio.h>


void fun(const int* a);

void fun1(int * const a);

int temp=13;

int main()
{
  int num=10;
//  int a=12;
//
//  int* const p=&num;
  //int* t=&num;
  //*t=12;

  //int* t=1;
  int * a=&num;

  fun(a);
  printf("*p=%d\n",*a);
  fun1(a);
  printf("*p=%d\n",*a);

  return 0;
}

void fun(const int* a)
{
  a=&temp;
}

void fun1(int * const a)
{
  *a=temp;
}
