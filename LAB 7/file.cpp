#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int process[4];
  int burst_time[4];
  int waiting_time[4];
  int turn_around_time[4];

  cout<<"Enter burst time for four processes : "<<endl;
  for(int i=0;i<4;i++)
  {
    process[i]=i;
    cin>>burst_time[i];
  }
  return 0;
}
