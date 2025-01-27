#include <stdio.h>

/* ### **Day 4, Task 5: Count Occurrences of a Specific Value in an Array**

#### Task:
Write a program that counts how many times a specific value appears in an array.

#### Requirements:
1. Input: An array of integers and a specific value.
2. Output: The number of times the value appears in the array.

**Example:**
For the array:
```
int arr[] = {1, 2, 3, 4, 3, 5, 3};
```
If you search for the value `3`, the program should output:
```
3
``` */

int occurences(int arr[], int length, int num){
    int counter = 0;

    for(int i = 0; i < length; i++){
        if(arr[i] == num){
            counter++;
        }
    }

    return  counter;
}

int main(){
  
    int arr[] = {1, 2, 3, 4, 3, 5, 3};
    int length = sizeof(arr) / sizeof(arr[0]);
    int num = 3;
    printf("%d", occurences(arr, length, num));

    return 0;
}