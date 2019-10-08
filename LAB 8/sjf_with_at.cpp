#include <iostream>
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

void sjf_operations(int waiting_time[],int burst_time[],int turn_around_time[],int completion_time[])
{


}

void print_table(int process[],int burst_time[],int waiting_time[],int turn_around_time[],int arrival_time[])
{
  cout<<endl<<endl;

  cout<<"Process"<<" \t"<<"Arrival Time"<<" \t"<<"Burst Time"<<" \t"<<"Waiting Time"<<" \t"<<"Turn Around Time"<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<process[i]<<"\t\t"<<arrival_time[i]<<"\t\t"<<burst_time[i]<<"\t\t"<<waiting_time[i]<<"\t\t"<<turn_around_time[i]<<endl;
  }

  cout<<endl<<endl;
}

int main()
{
  int process[4];
  int burst_time[4];
  int waiting_time[4];
  int completion_time[4];
  int turn_around_time[4];
  int arrival_time[4];

  input_burst_arrival_time(burst_time,process,arrival_time);

  sort_arrival_time(arrival_time,process,burst_time);

  sjf_operations(waiting_time,burst_time,turn_around_time,completion_time);

  print_table(process,burst_time,waiting_time,turn_around_time,arrival_time);

  return 0;
}
