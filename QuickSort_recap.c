#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b);
void quicksort(int arr[], int length);
void quicksort_recursion(int arr[], int low, int high);
int partition(int arr[], int low, int high);

int main(){

    // Seed the current time to the random function
    srand(time(NULL));
    
    // Initialize empty array length
    int array_length = 0;

    // Ask the user to enter desired array length
    printf("Enter a desired array length: ");

    // Assign user's input to the array_length variable
    scanf("%d", &array_length);

    // Allocate memory to store an array with the user's length
    int *arr = (int*)malloc(array_length * sizeof(int));

    // Check if memory allocation failed
    if(arr == NULL){
        printf("Memory allocation failed");
        // Free memory to avoid memory leaks
        free(arr);
        // Exit the app
        return 1;
    }

    // Fill the array with random numbers from 0 to 1000 and print the array
    printf("%-17s", "Initial array: ");
    for(int i = 0; i < array_length; i++){
        arr[i] = rand() % 1000 + 1;
        printf("%-4d ", arr[i]);
    }

    printf("\n");

    // Invoke Quick Sort Function
    quicksort(arr, array_length);

    // Print sorted array
    printf("%-17s", "Sorted array: ");
    for(int i = 0; i < array_length; i++){
        printf("%-4d ", arr[i]);
    }

    printf("\n");

    // Free memory after operations to prevent leaking
    free(arr);
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Invoke wrapper function for user's convenience
void quicksort(int arr[], int length){

    // Invoke sorting function(array, first element index, last element index)
    quicksort_recursion(arr, 0, length - 1);
}
void quicksort_recursion(int arr[], int low, int high){

    if(low < high){
        int pivot_index = partition(arr, low, high);
    
        // Now we know that the pivot is right in the middle
        // Sort left portion not including initial pivot
        quicksort_recursion(arr, low, pivot_index - 1);
        // Sort right portion not including initial pivot
        quicksort_recursion(arr, pivot_index + 1, high);
    }
}
int partition(int arr[], int low, int high){

    // Pick random element of the array as a pivot
    int pivot_index = low + (rand() % (high - low));

    // Check if random element differs from current last element
    if(pivot_index != arr[high]){
        // Swap last element of the array with the randomly choosen element
        swap(&arr[high], &arr[pivot_index]);
    }

    // Assign pivot to the last element of the array
    int pivot_value = arr[high];

    // Assign i to the first element of the array
    int i = low;

    //  arr[0]    arr_length - 1
    for(int j = low; j < high; j++){
        if(arr[j] <= pivot_value){

            // Example array
            // j
            // 6 3 7 5 1 2 [4]
            // i
            swap(&arr[j], &arr[i]);
            i++;

            // 1 iteration
            // j > pivot
            // j
            // 6 3 7 5 1 2 [4]
            // i
            
            // 2 iteration
            // j < pivot
            //   j
            // 3 6 7 5 1 2 [4]
            //   i
            
            // 3 iteration
            // j > pivot
            //     j
            // 3 6 7 5 1 2 [4]
            //   i
            
            // 4 iteration
            // j > pivot
            //       j
            // 3 6 7 5 1 2 [4]
            //   i
            
            // 5 iteration
            // j < pivot
            //         j
            // 3 1 7 5 6 2 [4]
            //     i
            
            // 6 iteration
            // j < pivot
            //           j
            // 3 1 2 5 6 7 [4]
            //       i
        }
    }

    // Place pivot in the middle of the array
    swap(&arr[i], &arr[high]);

    // Return i as an index of the pivot
    return i;
}