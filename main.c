#include "RRL.h"

int main() {

    // Number of processes
    int PRCS = 0;

    printf("%s", "Enter the number of processes: ");
    scanf("%d", &PRCS);

    // Predefined 'Burst Time', 'Arrival Time', and 'Time Slice'
    int BT[PRCS];
    int AT[PRCS];
    int TS = 0;

    // Burst Time
    printf("%s", "Enter the burst time for each process: ");
    for (int i = 0; i < PRCS; i++) { 
        scanf("%d", &BT[i]);
    }

    // Arrival Time
    printf("%s", "Enter the arrival time for each process: ");
    for (int i = 0; i < PRCS; i++) { 
        scanf("%d", &AT[i]);
    }

    // Time Slice
    printf("%s", "Enter the time slice: ");
    scanf("%d", &TS);

    // Initialize the processes
    Process processes[PRCS];
    initialize_processes(processes, PRCS, BT, AT);

    // Initialize Round-Robin algorithm
    round_robin_scheduler(processes, PRCS, TS);
    
    return 0;
}
