#include <stdio.h>

int main() {
    int x = 1, y = 0, z = 0;

    switch (x % 2) {
        case 0:
            x = 2;
            y = 3;
      
        case 1:
            x = 4;
            break;
        default:
            y = 3;
            x = z;
    }

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}
