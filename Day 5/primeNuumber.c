/* #### Task:
Write a program that checks if a given number is prime.

#### Requirements:
1. Input: A positive integer.
2. Output: Print "Prime" if the number is prime, or "Not Prime" if it's not.

**Definition:**
A prime number is a number greater than 1 that has no positive divisors other than 1 and itself. For example:
- `2`, `3`, `5`, `7` are prime numbers.
- `4`, `6`, `8`, `9` are not prime numbers.

### Example:
For the input `7`, the output should be:
```
Prime
```
For the input `10`, the output should be:
```
Not Prime
```
 */

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