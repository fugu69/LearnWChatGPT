#include <stdio.h>

/* #### Requirements:
1. Input: A 3x3 integer matrix.
2. Output: The sum of the main diagonal (elements where the row index equals the column index).

**Example:**
For the matrix:
```
1 2 3
4 5 6
7 8 9
```
The diagonal elements are `1`, `5`, and `9`, and their sum is `15`.
 */


int diagonal_sum(int matrix[][3]){
    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += matrix[i][i];
    }

    return sum;
}

int main(){

    int matrix[][3] = {
                        {1, 2, 3}, 
                        {4, 5, 6},
                        {7, 8, 9}
                    };

    printf("%d", diagonal_sum(matrix));

    return 0;
}