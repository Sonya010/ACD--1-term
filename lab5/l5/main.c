#include <stdio.h>
#include <windows.h>

int SearchX (int arr[], int s, int x) {
    int L = 0;
    int R = s - 1;
int mid;
    while (L < R) {
        mid = (L + R) / 2;
        printf("%d\n", mid);

        if(arr[mid] > x) {
                R = mid;
        }
        else if(arr[mid] < x) {
            L = mid + 1;
        }
        else R = mid;



#if 0
        if((arr[mid] == x) && (L == R)) {

            return mid;
        } else if (arr[mid] < x) {
            L = mid + 1;
        } else {
            R = mid;
        }
#endif
    }

if( (arr[mid] > x) && (R=0)) {
    return -1;
}
    if( (arr[mid] < x) && (L=s-1)) {
        return -1;
    }


    return mid;//-1
}

int main(void) {
    int Size = 9;
    int A [9][9] = {
        {1,2,2,2,2,2,3,4,4},
        {1,1,1,1,1,1,1,1,4},
        {1,1,1,1,1,1,1,1,4},
        {1,1,1,1,1,1,1,1,5},
        {1,1,1,1,1,1,1,1,5},
        {1,1,1,1,1,1,1,1,6},
        {1,1,1,1,1,1,1,1,7},
        {1,1,1,1,1,1,1,1,7},
        {1,1,1,1,1,1,1,1,8},
            };

    printf("Matrix is:\n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int X;
    printf("Input X:");
    scanf("%d", &X);

    int rowPos = SearchX(A[0], Size, X );
    if (rowPos != -1) {
        printf("X: %d is found at (0, %d)\n", X, rowPos);
    } else {
        printf("X: %d is not found\n", X);
    }

    int lastCol[Size];
    for (int i = 0; i < Size; i++) {
        lastCol[i] = A[i][Size - 1];
    }
//    printf("1\n");
    int colPos = SearchX(lastCol, Size, X );

    if (colPos != -1) {
        printf("X: %d is found at (%d, %d)\n", X, colPos, Size - 1);
    } else {
        printf("X: %d is not found\n", X);
    }

    Sleep(100000);
    return 0;
}
