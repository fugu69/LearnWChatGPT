#include <stdio.h>
#include <stdlib.h>

int main(){

    int elementsNumber = 0;
    
    printf("Enter a number of elements in the array: ");
    scanf("%d", &elementsNumber);
    int *arr = (int*)malloc(elementsNumber * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed.");
        return 1;
    }

    for(int i = 0; i < elementsNumber; i++){
        arr[i] = i + 1;
    }

    printf("Array elements:\n");
    for(int i = 0; i < elementsNumber; i++){
        printf("%d\n", arr[i]);
    }

    printf("\n");
    free(arr);
    arr = NULL;


    return 0;
}