#include <stdio.h>

int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    } else {
        return num * (factorial(num - 1));
    }
}

int main(){

    printf("%d", factorial(4));

    return 0;
}