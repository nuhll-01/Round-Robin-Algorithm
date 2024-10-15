#include "RRL.h"

int* dynamicQueue(int s) {
    int *ptr = calloc(s, sizeof(int));

    if (ptr == NULL) {
        puts("Memory allocation failed.");
        exit(-1);
    }

    return ptr;
}


void round_robin_scheduler(Process processes[], int n, int time_slice) { 

    // Initialize a dynamic queue to store the number of processes
    int *arr = dynamicQueue(n);

    // Initialize the front and rear of the queue
    int front = -1;
    int rear = -1;

    // Number of elements
    int size = 0;

    // Shortest Arrival-Time
    int SAT = INT_MAX;

    // Determine the shortest arrival-time
    for (int i = 0; i < n; i++) {
        if (processes[i].arrival_time < SAT) { 
            SAT = processes[i].arrival_time;
        }
    }

    // Added the processes to the dynamic queue
    for (int i = 0; i < n; i++) { 
        *(arr + i) = processes[i].id;
    }

    // Display the process IDs ( still under development )
    for (int i = 0; i < n; i++) { 
        printf("Process ID: %d\n", *(arr + i));
    }

    free(arr);
}
