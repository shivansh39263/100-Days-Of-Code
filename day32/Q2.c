#include <stdio.h>

int main() {
    int n, digit;
    int count[10] = {0};
    int max = 0, most;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;       
        count[digit]++;      
        n = n / 10;           
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            most = i;
        }
    }

    printf("Digit occurring most times = %d\n", most);

    return 0;
}