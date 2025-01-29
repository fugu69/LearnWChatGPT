#include <stdio.h>
#include <stdlib.h>

int main(){

    int arrLength = 0;
    int multiplier = 0;
    printf("Enter the array length: ");
    scanf("%d", &arrLength);
    int *arr = (int*)malloc(arrLength * sizeof(int));


    if(arr == NULL){
        printf("Memory allocation failed.");
        return 1;
    }

    for(int i = 0; i < arrLength; i++){
        arr[i] = i + 1;
    }

    printf("Current array: \n");
    for(int i = 0; i < arrLength; i++){
        printf("%d\n", arr[i]);
    }

    printf("Choose multiplier (2-5): ");
    scanf("%d", &multiplier);

    int multipliedLength = arrLength * multiplier;
    int *temp = (int*)realloc(arr, multipliedLength * sizeof(int));

    if(temp == NULL){
        printf("Memory re-allocation failed.");
        free(arr);
        return 1;
    }    

    arr = temp;

    for(int i = arrLength; i < multipliedLength; i++){
        arr[i] = i + 1;
    }
    
    printf("Final array: \n");
    for(int i = 0; i < multipliedLength; i++){
        printf("%d\n", arr[i]);
    }

    free(arr);

    return 0;
}