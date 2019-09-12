#include <stdio.h>
#include <sys/types.h>

void main(void)
{
  pid_t pid;
  int i,j;
  int p;

p=fork();
    for(i=1;i<4;i++)
    {
      for(j=1;j<i+1;j++)
      {
        if(p!=0)
        {
        printf("*");
        }
        else
        {
        printf("%d",j);
        }
      }
      printf("\n");
    }
}
