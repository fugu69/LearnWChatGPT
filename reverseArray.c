#include <stdio.h>

void reverse(long long arr[], int length){
    for(int i = 0; i < length / 2; i++){
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

int main(){

    long long arr[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int length = sizeof(arr)/sizeof(arr[0]);

    reverse(arr, length);

    for(int i = 0; i < length; i++){
        printf("%lld\n", arr[i]);
    }

    return 0;
}