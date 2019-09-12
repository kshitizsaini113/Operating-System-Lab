#include <stdio.h>
#include <sys/types.h>
#include <string.h>

#define MAX_COUNT 2
#define BUF_SIZE 100

void main(void)
{
  pid_t pid;
  int i;
  int p;
  char buf[BUF_SIZE];

p=fork();
printf("entering with p as %d\n",p);
if(p==0)
  {
    pid = getpid();

    for(i=1;i<=MAX_COUNT;i++)
    {
      sprintf(buf, "This line is from pid %d, --Child value = %d\n", pid, i);
      write(1, buf, strlen(buf));
    }
  }

  else
  {
    pid = getpid();

    for(i=1;i<=MAX_COUNT;i++)
    {
      sprintf(buf, "This line is from pid %d, --Parent value = %d\n", pid, i);
      write(1, buf, strlen(buf));
    }
  }

  p = fork();
  pid = getpid();
  printf("%d Hello\n",pid);

}
