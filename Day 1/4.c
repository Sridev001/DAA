// write a program to get the largest element of an array.

#include <stdio.h>

int main() {
    int n;
    double arr[100];

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Displaying the array
    printf("Array elements:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Storing the largest number in arr[0]
    for (int i = 1; i < n; ++i) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }

    printf("Largest element = %d\n", arr[0]);
    return 0;
}
