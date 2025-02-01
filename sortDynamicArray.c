#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ROAD TO THE QUICK SORT FUNCTION
// Learning Quick Sort Algorith with ChatGPT has failed.
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
        printf("%d\n", arr[i]);
    }

    quicksort(arr, elemsNumber);

    for(int i = 0; i < elemsNumber; i++){
        printf("%d\n", arr[i]);
    }

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
    int pivot_value = array[high];

    int i = low;

    for (int j = low; j < high; j++){
        if(array[j] <= pivot_value){
            swap(&array[i], &array[j]);
            i++;
        }
    }
}