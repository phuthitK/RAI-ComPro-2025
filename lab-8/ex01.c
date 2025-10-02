#include <stdio.h>
#define PI 3.1416


float circumference(float r) {
    return 2 * PI * r;
}

float area(float r) {
    return PI * r * r;
}

int main() {
    float r;
    printf("Enter the radius in cm: ");
    scanf("%f", &r);

    printf("Circumference: %.2f\n", circumference(r));
    printf("Area: %.2f\n", area(r));

    return 0;
}
