#include <stdio.h>
#include <sys/types.h>

void fun(int);

void main(void)
{
  int i,j;
  fun(1);
  printf("\n");
}

void fun(int j)
{
  int p;
  p=fork();
  if(p!=0)
  {
    printf("*");
  }
  else
  {
    printf("%d",j);
  }
}
