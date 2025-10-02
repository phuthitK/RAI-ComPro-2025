#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
void printPrimes(int start, int end) {
    printf("The prime numbers within the intervals are:\n");
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);
    printPrimes(start, end);

    return 0;
}
