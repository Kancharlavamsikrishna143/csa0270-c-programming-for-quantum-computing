#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, sum = 0;
    
    printf("Diagonal elements in the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            // check if current element is on the diagonal
            if (i == j) {
                printf("%d ", matrix[i][j]);
                sum += matrix[i][j];
            }
        }
    }
    
    printf("\nSum of diagonal elements in the matrix = %d\n", sum);
    
    return 0;
}
