#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

void input_burst_arrival_time(int burst_time[],int process[],int arrival_time[])
{
  cout<<"Enter burst time and arrival time (in pairs) for four processes : "<<endl;
  for(int i=0;i<4;i++)
  {
    process[i]=i;
    cin>>burst_time[i];
    cin>>arrival_time[i];
  }
}

void sort_arrival_time(int arrival_time[],int process[],int burst_time[])
{
  for(int i=0;i<4;i++)
  {
    for(int j=i+1;j<4;j++)
    {
      if(arrival_time[i]>arrival_time[j])
      {
        swap(process[i],process[j]);
        swap(arrival_time[i],arrival_time[j]);
        swap(burst_time[i],burst_time[j]);
      }
    }
  }
}



void sjf_operations(int waiting_time[],int burst_time[],int turn_around_time[],int arrival_time[],int process[])
{
  waiting_time[0]=0;

  for(int i=0;i<4;i++)
  {
    if(i>0)
    {
      waiting_time[i]=waiting_time[i-1]+burst_time[i-1];
    }
    turn_around_time[i]=waiting_time[i]+burst_time[i];
  }
}

void print_table(int process[],int burst_time[],int waiting_time[],int turn_around_time[],int arrival_time[])
{
  cout<<endl<<endl;

  cout<<"Process"<<"         "<<"Arrival Time"<<"   "<<"Burst Time"<<"     "<<"Waiting Time"<<"   "<<"Turn Around Time"<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<process[i]<<"               "<<arrival_time[i]<<"              "<<burst_time[i]<<"               "<<waiting_time[i]<<"               "<<turn_around_time[i]<<endl;
  }

  cout<<endl<<endl;
}

void print_gantt_chart(int burst_time[],int turn_around_time[],int process[])
{
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
}

int main()
{
  int process[4];
  int burst_time[4];
  int waiting_time[4];
  int temp_waiting_time[4];
  int turn_around_time[4];
  int arrival_time[4];

  input_burst_arrival_time(burst_time,process,arrival_time);

  sort_arrival_time(arrival_time,process,burst_time);

  sjf_operations(waiting_time,burst_time,turn_around_time,arrival_time,process);

  print_table(process,burst_time,waiting_time,turn_around_time,arrival_time);

  //print_gantt_chart(burst_time,turn_around_time,process);

  return 0;
}
