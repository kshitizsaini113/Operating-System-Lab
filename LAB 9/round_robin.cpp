#include <iostream>
#include <stdlib.h>

void input_burst_time(int burst_time[],int process[])
{
  cout<<"Enter burst time for four processes : "<<endl;
  for(int i=0;i<4;i++)
  {
    process[i]=i;
    cin>>burst_time[i];
  }
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
  int temp_waiting_time[4];
  int turn_around_time[4];



  return 0;
}
