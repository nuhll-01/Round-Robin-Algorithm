#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int completed;
} Process;

void initialize_processes(Process processes[], int n, int burst_times[], int arrival_times[]);
void round_robin_scheduler(Process processes[], int n, int time_slice);
