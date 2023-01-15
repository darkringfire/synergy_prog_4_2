#include <iostream>
#define N1 7
#define N2MAX 100

int main() {
    int arr1[N1];
    printf("Task 1\n");
    printf("Enter array items:\n");
    for (int i = 0; i < N1; i++) {
        printf("Item %i=", i);
        scanf("%i", &arr1[i]);
    }
    printf("\nPrint array:\n");
    for (int i = 0; i < N1; i++) {
        printf("Item %i = %i\n", i, arr1[i]);
    }

    printf("\nTask 2\n");
    int arr2[100];
    int n2;
    do {
        printf("Enter number of items (1..%i):", N2MAX);
        scanf("%i", &n2);
    } while (n2 < 1 || n2 > 100);

    for (int i = 0; i < n2; i++) {
        printf("Item %i=", i);
        scanf("%i", &arr2[i]);
    }
    printf("\nPrint array:\n");
    for (int i = 0; i < n2; i++) {
        printf("Item %i = %i\n", i, arr2[i]);
    }
    return 0;
}
