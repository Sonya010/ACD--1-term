#include <stdio.h>
int m = 8;
int n = 9;
    float A [8][9] = {
        {1,2,2,2,2,2,3,4,4},
        {1,1,1,1,1,1,1,1,4},
        {1,1,1,1,1,1,1,1,5},
        {1,1,1,1,1,1,1,1,5},
        {1,1,1,1,1,1,1,1,5},
        {1,1,1,1,1,1,1,1,6},
        {1,1,1,1,1,1,1,1,7},
        {1,1,1,1,1,1,1,1,7},
            };
printA () {
    printf("Matrix is:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%5.1f", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int SearchX_Row(int x, int S) {
int L = 0;
int R = S - 1;
int b = -1;

int mid;
    while(L < R) {
        mid = (L + R) / 2;
        if(A[0][mid] == x) {
            R = mid;
            b = mid;
        } else if(A[0][mid] > x) {
            R = mid;
        } else if (A[0][mid] < x) {
            L = mid + 1;
        }
        if((L == R) && (A[0][S - 1])== x) {
             b = R;
        }
    }
        return b;
    }

int SearchX_Col(int x, int S) {
    int L = 0;
    int R = S - 1;
    int b = -1;

    int mid;
    while(L < R) {
        mid = (L + R) / 2;
        if(A[mid][S - 1] == x) {
            R = mid;
            b = mid;
        } else if(A[mid][S - 1] > x) {
            R = mid;
        } else if (A[mid][S - 1] < x) {
            L = mid + 1;
        }
        if((L == R) && (A[S - 1][8])== x) {
            b = R;
        }
    }
    return b;
}

int main(void) {
printA(); //ф-ція виводу матриці
int res;
int size;

int X;
printf("Input X:");
scanf("%d", &X);

     res = SearchX_Row(X, m);
    if (res != -1) {
        printf("In first row, X: %d is found at (0, %d)\n", X, res);
    } else {
        printf("In first row, X: %d is not found\n", X);
    }

     res = SearchX_Col(X, n);
    if (res != -1) {
    printf("In last column, X: %d is found at (%d, 8)\n", X, res);
    } else {
        printf("In last column, X: %d is not found\n", X);
    }

    return 0;
}
