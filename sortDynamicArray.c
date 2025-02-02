#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ROAD TO THE QUICK SORT FUNCTION
// Learning Quick Sort Algorithm with ChatGPT has failed.
// Good video to start with: https://www.youtube.com/watch?v=0jDiBM68NGU 


// Functions prototypes


void swap(int *a, int *b);                  // swap array's elements in place
void quicksort(int array[], int length);    // wrapper-function
void quicksort_recursion(int arr[], int low, int high);    /*  algo itself. 
                                                            low is 1st element, high is the last element. */
int partition(int arr[], int low, int high);



int main(){

    srand(time(NULL));

    long long elemsNumber = 0;


    printf("Enter a number: ");
    scanf("%lld", &elemsNumber);

    int *arr = (int*)malloc(elemsNumber * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Initial array created: \n");
    for(int i = 0; i < elemsNumber; i++){
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }

    printf("\n");

    quicksort(arr, elemsNumber);

    printf("Sorted array: \n");
    for(int i = 0; i < elemsNumber; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    free(arr);


    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int array[], int length){
    
    quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int array[], int low, int high){
    if(low < high){
        int pivot_index = partition(array, low, high);  // function returns index of pivot
        quicksort_recursion(array, low, pivot_index - 1);  //left portion of array
        quicksort_recursion(array, pivot_index + 1, high); //right portion of array
    }

}

int partition(int array[], int low, int high){
    
    // Example array
    // j
    // 6 3 7 5 1 2 [4]
    // i


    // Random number from array is choosen as pivot to optimize the algorithm
    int pivot_index = low + (rand() % (high - low));

    if(pivot_index != high){
        swap(&array[pivot_index], &array[high]);
    }

    int pivot_value = array[high];

    int i = low;

    for (int j = low; j < high; j++){
        if(array[j] <= pivot_value){
            swap(&array[i], &array[j]);
            i++;
        }

            // 1st iteration
            // j > pivot
            // j
            // 6 3 7 5 1 2 [4]
            // i

            // 2nd iteration
            // j < pivot
            //   j
            // 3 6 7 5 1 2 [4]
            // i->
            //   i

            // 3rd iteration
            // j > pivot
            //     j
            // 3 6 7 5 1 2 [4]
            //   i

            // 4th iteration
            // j > pivot
            //       j
            // 3 6 7 5 1 2 [4]
            //   i

            // 5th iteration
            // j < pivot
            //         j
            // 3 1 7 5 6 2 [4]
            //   i->
            //     i

            // 6th iteration
            // j < pivot
            //           j
            // 3 1 2 5 6 7 [4]
            //     i->
            //       i

    }

    swap(&array[i], &array[high]);

    //        i
    // 3 1 2  5  6 7 [4]
    // 3 1 2 [4] 6 7  5


    return i; //3
}