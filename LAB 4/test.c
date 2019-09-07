#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Please enter a number:\n");
    scanf("%d",&a);
    //printf("Your number is: %d\n",a);
    char buf[32];
sprintf(buf, "./file2.sh 1");
system(buf);
}
