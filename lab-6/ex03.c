#include <stdio.h>
#include <math.h>

struct Point {
    float x, y;
};

int main() {
    struct Point p1, p2;
    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);
    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);

    float d = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
           p1.x, p1.y, p2.x, p2.y, d);

    return 0;
}
