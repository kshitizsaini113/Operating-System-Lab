#include <iostream>

using namespace std;


void input_burst_time(int burst_time[],int process[])
{
  cout<<"Enter burst time and arrival time (in pairs) for four processes : "<<endl;
  for(int i=0;i<4;i++)
  {
    process[i]=i;
    cin>>burst_time[i];
  }
}

void sort_burst_time(int burst_time[],int process[])
{
  for(int i=0;i<4;i++)
  {
    for(int j=i+1;j<4;j++)
    {
      if(burst_time[i]>burst_time[j])
      {
        swap(process[i],process[j]);
        swap(burst_time[i],burst_time[j]);
      }
    }
  }
}

void sjf_operations(int waiting_time[],int burst_time[],int turn_around_time[])
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

void print_table(int process[],int burst_time[],int waiting_time[],int turn_around_time[])
{
  cout<<endl<<endl;

  cout<<"Process"<<"         "<<"Burst Time"<<"     "<<"Waiting Time"<<"   "<<"Turn Around Time"<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<process[i]<<"               "<<burst_time[i]<<"               "<<waiting_time[i]<<"               "<<turn_around_time[i]<<endl;
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
