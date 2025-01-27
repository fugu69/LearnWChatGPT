#include <stdio.h>

/* #### Task:
Write a program to find the smallest element in a given array of integers.

#### Requirements:
1. Input: An array of integers (you can initialize it in the program).
2. Output: Print the smallest value in the array.

**Example:**
For the array:
```
int arr[] = {12, 7, 9, 15, 4};
```
The program should output:
```
4
``` 
*/

void findSmallest(int array[], int length){
    int smallest = array[0];

    for(int i = 0; i < length; i++){
        if(array[i] < smallest){
            smallest = array[i];
        }
    }

    printf("%d", smallest);
}

int main(){

    int arr[] = {12, 7, 9, 15, 4};
    int length = sizeof(arr)/sizeof(arr[0]);

    findSmallest(arr, length);

    return 0;
}