#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    int max, min;

    printf("Enter 5 elements:\n");

    // Input
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is maximum and minimum
    max = arr[0];
    min = arr[0];

    // Find maximum and minimum
    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
