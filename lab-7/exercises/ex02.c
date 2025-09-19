#include <stdio.h>

int main() {
    float x, y, temp;
    float *px = &x, *py = &y;

    printf("Enter x: ");
    scanf("%f", px);
    printf("Enter y: ");
    scanf("%f", py);

 
    temp = *px;
    *px = *py;
    *py = temp;

    printf("After swap: x = %.2f, y = %.2f\n", x, y);
    return 0;
}
