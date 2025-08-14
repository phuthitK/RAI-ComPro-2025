#include <stdio.h>

int main() {
    int x = 1, y = 0, z = 0;

    if (x % 2 == 0) {
        x = 2;
        y = 3;
    } else if (x % 2 == 1) {
        x = 4;
    } else {
        y = 3;
        x = z;
    }

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}
