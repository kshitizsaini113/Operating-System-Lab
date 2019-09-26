#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int process[4];
  int burst_time[4];
  int waiting_time[4];
  int temp_waiting_time[4];
  int turn_around_time[4];
  int arrival_time[4];

  cout<<"Enter burst time and arrival time (in pairs) for four processes : "<<endl;
  for(int i=0;i<4;i++)
  {
    process[i]=i;
    cin>>burst_time[i];
    cin>>arrival_time[i];
  }

  for(int i=0;i<4;i++)
  {
    for(int j=i+1;j<4;j++)
    {
      if(arrival_time[i]>arrival_time[j])
      {
        swap(process[i],process[j]);
        swap(burst_time[i],burst_time[j]);
        swap(arrival_time[i],arrival_time[j]);
      }
    }
  }

  waiting_time[0]=0;
  temp_waiting_time[0]=0;

  for(int i=0;i<4;i++)
  {
    if(i>0)
    {
      temp_waiting_time[i]=temp_waiting_time[i-1]+burst_time[i-1];
      waiting_time[i]=temp_waiting_time[i]-arrival_time[i];
    }
    turn_around_time[i]=waiting_time[i]+burst_time[i];
  }

  cout<<endl<<endl;

  cout<<"Process"<<"         "<<"Arrival Time"<<"   "<<"Burst Time"<<"     "<<"Waiting Time"<<"   "<<"Turn Around Time"<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<process[i]<<"               "<<arrival_time[i]<<"              "<<burst_time[i]<<"               "<<waiting_time[i]<<"               "<<turn_around_time[i]<<endl;
  }

  cout<<endl<<endl;

  for(int i=0;i<4;i++)
  {
    cout<<"|"<<process[i];
    for(int j=0;j<burst_time[i];j++)
    {
      cout<<" ";
    }
  }
  cout<<"|"<<endl;
  cout<<"0";
  for(int i=0;i<4;i++)
  {
    cout<<" ";
    for(int j=0;j<burst_time[i];j++)
    {
      cout<<" ";
    }
    cout<<turn_around_time[i];
  }

  cout<<endl<<endl;


  return 0;
}
