#include <stdio.h>
int main()
{
    // 3D array declaration
    int i,j,k;
    int arr[2][2][2] = { 10, 20, 30, 40, 50, 60 };
    // printing elements
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

