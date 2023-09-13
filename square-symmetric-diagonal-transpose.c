#include <stdio.h>

// Function to create the matrix
void MatrixProductFunc(int N, int A[N][N], int results[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            results[i][j] = 0;
            for (int k = 0; k < N; k++) {
                results[i][j] += A[i][k] * A[j][k];
            }
        }
    }
}

int main() {
    int N;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix (N > 6): ");
    scanf("%d", &N);
    
    // Input validation to ensure N should be a non-negative number greater than 6
    if (N <= 6) {
        printf("\nInvalid Error !!!: N must be greater than 6\n");
        return 0;
    }
    
    int mtr[N][N];
    
    // Fill the matrix with values
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i % 2 == 0) {
                // Even row, even column or odd row, odd column
                mtr[i][j] = 2 * (i + j) + 1;
            }
            else {
                // Even row, odd column or odd row, even column
                mtr[i][j] = 2 * (i + j);
            }
        }
    }
    
    // Printing the results
    printf("\nEnter the matrix is:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", mtr[i][j]);
        }
        printf("\n");
    }
    
    // check if this is a symmetric matrix
    int  isSymmetric = 1; // Assume it is symmetric initially
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mtr[i][j] != mtr[j][i]) {
                isSymmetric = 0; // It's not symmetric
                break;
            }
        }
        if (!isSymmetric) break;
    }
    
    if (isSymmetric) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is not symmetric.\n");
    }
    
    // Calculates the sum of all non-diagonal elements
    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j) {  // Exclude diagonal elements
                sum += mtr[i][j];
            }
        }
    }
    // Printing results
    printf("\nThe sum of all non-diagonal elements is: %d\n", sum);
    
    // Multiply A and A^T
    int prod[N][N];
    MatrixProductFunc(N, mtr, prod); //MatrixProductFunc() and call it inside main() function

    // Calculate product of A and A^T using a separate sub-function 
    printf("\nEnter the product of the matrix and its transpose is: \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", prod[i][j]);
        }
        printf("\n");   // Printing Results
    }
}
