#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
  pid_t pid;
  int mypipefd[2];
  int ret;
  char buf[20];

  ret=pipe(mypipefd);

  if(ret==-1)
  {
    perror("pipe");
    exit(1);
  }

  pid=fork();

  if(pid == 0)
  {
    //Child Process
    printf("Child Process\n");
    write(mypipefd[1],"Hello There!",12);
  }
  else
  {
    //Parent Process
    printf("PArent Process\n");
    read(mypipefd[0],buf,12);
    printf("buf : %s\n",buf);
  }
  return 0;
}
