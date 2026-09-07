#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;
    int i;

    // Taking input
    printf("Enter 5 array elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding sum
    for (i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}
