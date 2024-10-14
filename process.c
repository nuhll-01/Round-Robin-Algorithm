#include "RRL.h"

/**
 * 
 * @brief Initialize the process
 * 
 * @param processes The array containing the number of processes
 * @param burst_times Predefined burst times
 * @param arrival_times Predefined arrival times
 * 
 */
void initialize_processes(Process processes[], int n, int burst_times[], int arrival_times[]) { 
    // Loop through each process and initialize fields
    // Each process will contain these unique attributes/fields.
    for (int i = 0; i < n; i++) { 
        processes[i].id = i + 1;
        processes[i].arrival_time = arrival_times[i];
        processes[i].burst_time = burst_times[i];
        processes[i].remaining_time = burst_times[i];
        processes[i].completed = 0; 
    }
}
