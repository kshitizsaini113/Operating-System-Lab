#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int process[4];
  int burst_time[4];
  int arrival_time[4];
  int waiting_time[4];
  int turn_around_time[4];

  cout<<"Enter burst time for four processes : "<<endl;
  for(int i=0;i<4;i++)
  {
    process[i]=i;
    cin>>burst_time[i];
  }

  waiting_time[0]=0;

  for(int i=0;i<4;i++)
  {
    if(i>0)
    {
      waiting_time[i]=waiting_time[i-1]+burst_time[i-1];
    }
    turn_around_time[i]=waiting_time[i]+burst_time[i];
  }

  cout<<endl<<endl;

  cout<<"Process"<<"         "<<"Burst Time"<<"     "<<"Waiting Time"<<"   "<<"Turn Around Time"<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<process[i]<<"               "<<burst_time[i]<<"               "<<waiting_time[i]<<"               "<<turn_around_time[i]<<endl;
  }

  cout<<endl<<endl;

  for(int i=0;i<4;i++)
  {
    cout<<"|"<<i;
    for(int j=0;j<burst_time[i];j++)
    {
      cout<<" ";
    }
  }
  cout<<"|"<<endl;

  cout<<endl<<endl;


  return 0;
}
