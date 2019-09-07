#include <stdio.h>

void insertionsort(int arr[],int n )
{
    int i;int j;int key;
    for(i=1;i<n;i++)
    {
      key=arr[i];
      j=i-1;


    while(j>=0&&arr[j]>key)
    {
      arr[j+1]=arr[j];
      j=j-1 ;
    }
    arr[j+1]=key;
  }
}

void printfunc(int arr[],int n)
{
  for(int i=0;i<=(n-1);i++)
  {
    printf(" %d, ",arr[i] );
  }
  printf("\n" );
}

int main(int argv, char **argv)
{
  int n;
  for(int i=1;i<=argv;i++)
  {
    cout<<argv[i]
  }
  /*
  n= sizeof(arr)/sizeof(arr[0]);
  printf("unsorted array : " );
  printfunc(arr,n);
  printf("\n" );
   insertionsort(arr,n);
   printf("sorted array : ");
   printfunc(arr,n);
*/

}
