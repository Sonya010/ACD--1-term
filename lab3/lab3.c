#include <stdio.h>

int main() {
    int n, i, j;
    printf("input size of Matrix :");
    scanf(" %d", &n);
    float A[n][n];

        for( i = 0; i < n; i++) {
            for ( j = 0; j < n; j++) {
                printf("input A[%d][%d]=", i, j);
                scanf("%f", &A[i][j]);
            }
        }
printf("Matrix:\n");

    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    float min = A[0][0];
    float max = A[0][0];
    int MinInd = 0;
    int MaxInd = 0;

    for( i = 0; i < n; i++) {
        if (A[i][i] < min) {
            min = A[i][i];
            MinInd = i;
        }
        if (A[i][i] >= max) {
            max = A[i][i];
            MaxInd = i;
        }
    }
    printf("min : %.2f\n", min);
    printf("max: %.2f\n", max);
    printf("\n");

    float c;
    c = A[MinInd][MinInd];
    A[MinInd][MinInd] = A[MaxInd][MaxInd];
    A[MaxInd][MaxInd] = c;


    printf("Matrix_2:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}