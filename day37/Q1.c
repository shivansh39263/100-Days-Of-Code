
#include <stdio.h>

int main() {
    int matrix[3][3];
    int sum[3];
    int i, j;

    printf("Enter 9 elements of the matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        sum[i] = 0;

        for (j = 0; j < 3; j++) {
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    printf("Sum of each row:\n");

    for (i = 0; i < 3; i++) {
        printf("Row %d = %d\n", i + 1, sum[i]);
    }

    return 0;
}
