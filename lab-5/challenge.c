#include <stdio.h>

int main() {
    int n, i, search, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search for: ");
    scanf("%d", &search);

    // Count occurrences
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            count++;
        }
    }

    printf("Element %d occurs %d times\n", search, count);

    return 0;
}