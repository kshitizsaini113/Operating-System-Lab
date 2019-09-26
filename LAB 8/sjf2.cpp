#include <iostream>
#include <stdlib.h>
#include "myfunction.h"

using namespace std;

int main()
{
  int process[4];
  int burst_time[4];
  int waiting_time[4];
  int temp_waiting_time[4];
  int turn_around_time[4];

  input_burst_time(burst_time,process);

  sort_burst_time(burst_time,process);

  sjf_operations(waiting_time,burst_time,turn_around_time);

  print_table(process,burst_time,waiting_time,turn_around_time);

  print_gantt_chart(burst_time,turn_around_time,process);

  return 0;
}
