/* #### Task:
Write a program to print the following pattern using nested loops:

```
1
12
123
1234
12345
```

#### Requirements:
- Use loops to generate and print the pattern.
- You can use a single outer loop for the rows and an inner loop to print the numbers in each row.
 */

#include <stdio.h>

int main(){

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        
        printf("\n");
    }


    return 0;
}
