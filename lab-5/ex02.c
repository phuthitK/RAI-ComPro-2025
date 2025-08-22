#include <stdio.h>

int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(original) / sizeof(original[0]);
    int reversed[n];

    // Reverse using another array
    for(int i = 0; i < n; i++) {
        reversed[i] = original[n - 1 - i];
    }

    printf("Reversed Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}