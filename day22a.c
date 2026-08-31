#include <stdio.h>

int main() {
    int num, original_num, rem, sum = 0;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    original_num = num;

    while (num > 0) {
        rem = num % 10; 

        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;

        num = num / 10;
    }

    if (sum == original_num) {
        printf("%d is a Strong Number!\n", original_num);
    } else {
        printf("%d is NOT a Strong Number.\n", original_num);
    }

    return 0;
}
