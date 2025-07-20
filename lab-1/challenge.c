#include <stdio.h>

int main() {
    // Print table header
    printf("+----------------+--------+--------+\n");
    printf("| %-14s | %6s | %6s |\n", "Name", "Score1", "Score2");
    printf("+----------------+--------+--------+\n");

    // Print student rows
    printf("| %-14s | %6d | %6d |\n", "Alice", 85, 90);
    printf("| %-14s | %6d | %6d |\n", "Bob", 78, 82);
    printf("| %-14s | %6d | %6d |\n", "Charlie", 92, 88);

    // Print footer
    printf("+----------------+--------+--------+\n");

    return 0;
}
