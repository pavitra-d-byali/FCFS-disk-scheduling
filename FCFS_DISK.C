#include <stdio.h>
#include <stdlib.h>

void calculate_seek_time(int arr[], int n, int initial_position) {
    int total_seek_time = 0;
    int current_position = initial_position;
    
    // Process each request in the order they arrive
    for (int i = 0; i < n; i++) {
        total_seek_time += abs(arr[i] - current_position);  // Calculate seek time
        current_position = arr[i];  // Move disk head to the request position
    }

    // Output total seek time
    printf("Total seek time: %d\n", total_seek_time);
}

int main() {
    int n, initial_position;

    // Input number of requests and initial position of the disk head
    printf("Enter number of disk requests: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the disk request positions: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the initial position of the disk head: ");
    scanf("%d", &initial_position);

    // Calculate total seek time using FCFS scheduling
    calculate_seek_time(arr, n, initial_position);

    return 0;
}

