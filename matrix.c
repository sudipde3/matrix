//github: sudipde3

#include <stdio.h>
#include <math.h>

int main() {
    int M, N;

    // Let A be a M X N matrix
    printf("Enter the number of rows and columns of the matrix: \n");
    scanf("%d %d", &M, &N);

    double A[M][N];

    // Enter the Matrix 
    printf("\nEnter the matrix: \n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    // Computing mean, SD, Min and Max of A
    double sum = 0, min = A[0][0], max = A[0][0];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            sum += A[i][j];
            if (A[i][j] < min) min = A[i][j];
            if (A[i][j] > max) max = A[i][j];
        }
    }
    double mean = sum / (M * N);
    double sum_sd = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            sum_sd += pow(A[i][j] - mean, 2);
        }
    }
    sum_sd /= (M * N);
    double sd = sqrt(sum_sd);

    // Printing the results
    printf("\nMean: %0.4lf, Standard Deviation: %0.4lf, Minimum: %0.4lf, Maximum: %0.4lf\n", mean, sd, min, max);

    // Create a new matrix B from A such that B=(A-mean)/SD
    double B[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            B[i][j] = (A[i][j] - mean) / sd;
        }
    }
    printf("\nThe new matrix B is:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%0.4lf ", B[i][j]);
        }
        printf("\n"); // Printing the result
    }

    // Create a matrix C from A such that C=(A-Min)/(Max-Min)*100
    double C[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = (A[i][j] - min) / (max - min) * 100;
        }
    }
    printf("\nThe new matrix C is:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%0.4lf ", C[i][j]);
        }
        printf("\n"); // Printing the result
    }

    // Create a matrix D from A such that D = log(A)
    double D[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            D[i][j] = log(A[i][j]);
        }
    }
    printf("\nThe new matrix D is:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%0.4lf ", D[i][j]);
        }
        printf("\n"); // Printing the result
    }
    double E[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (i % 2 == 0) {
                E[i][j] = 1;
            } else {
                E[i][j] = A[i][j];
            }
        }
    }
    printf("\nThe new matrix E is:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%0.4lf ", E[i][j]);
        }
        printf("\n"); // Printing the result
    }
}
