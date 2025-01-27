/* #### Task:
Write a program that calculates the sum of all even numbers in an array of integers.

#### Requirements:
1. Input: An array of integers.
2. Output: The sum of all even numbers in the array.

**Example:**
For the array:
```
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
```
The sum of even numbers (`2 + 4 + 6 + 8`) would be:
```
20
``` */

#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }

    printf("%d", sum);

    return 0;
}