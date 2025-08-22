#include <stdio.h>

int main() {
    int numbers[8];
    int i, smallest, largest;

    // Input 8 numbers
    for (i = 0; i < 8; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize smallest and largest with first element
    smallest = largest = numbers[0];

    // Find smallest and largest
    for (i = 1; i < 8; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    // Output results
    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}