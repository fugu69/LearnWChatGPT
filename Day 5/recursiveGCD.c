/* ### Day 5, Task 4: Find the Greatest Common Divisor (GCD)  

#### Task:  
Write a program that calculates the Greatest Common Divisor (GCD) of two positive integers.  

#### Details:  
1. The GCD of two integers is the largest integer that divides both numbers without leaving a remainder.  
2. Implement this using **Euclid's Algorithm**:
   - If `b == 0`, then `GCD(a, b) = a`.
   - Otherwise, `GCD(a, b) = GCD(b, a % b)`.  

#### Input:  
Prompt the user to enter two positive integers.  

#### Output:  
Print the GCD of the two numbers.  
 */

#include <stdio.h>
// My version
/* int findGCD(int num1, int num2){

    int gcd = 0;
    int swap;
    if(num2 == 0){
        gcd = num1;
        return gcd;
    } else{
        swap = num2;
        num2 = num1%num2;
        num1 = swap;
        return findGCD(num1, num2);
    }
} */

// Cleaner version suggested by ChatGPT with My comments
int findGCD(int num1, int num2){

    if(num2 == 0){
        return num1;    // Following from Euclid's Algorithm (if b = 0 => a is GCD)
    } else{
        return findGCD(num2, num1 % num2);  //Nums are available to us as arguments of the initial func call. We pass them to the recursive func without changing, but they're evaluated by the programm as new numbers
    }
}


int main(){

    int num1 = 48;
    int num2 = 18;

    printf("%d", findGCD(num1, num2));

    return 0;
}