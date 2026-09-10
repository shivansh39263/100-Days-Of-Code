#include <stdio.h>

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    int n1 = 3, n2 = 3;
    int c[n1 + n2];

    for (int i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    for (int i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}