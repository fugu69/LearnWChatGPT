#include <stdio.h>
#include <math.h>

int main(){

    int num = 0;
    int prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1){
        printf("Not prime");
        return 0;
    } else{
        int iterations_limit = sqrt(num);
        for(int i = 2; i <= iterations_limit; i++){
            if(num % i == 0){
                prime = 0;
                break;
            }
        }
    }

    if(prime){
        printf("Prime");
    } else{
        printf("Not prime");
    }

    return 0;
}