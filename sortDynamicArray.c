#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ROAD TO THE QUICK SORT FUNCTION
// Learning Quick Sort Algorith with ChatGPT has failed.
// Good video to start with: https://www.youtube.com/watch?v=0jDiBM68NGU 

/* void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
} */


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

    for(int i = 0; i < elemsNumber; i++){
        arr[i] = rand() % 100 + 1;
    }


    int x = 5;
    int y = 10;

    swap(&x, &y);
    printf("x = %d, y = %d", x, y);

    return 0;
}
