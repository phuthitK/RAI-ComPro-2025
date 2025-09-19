#include <stdio.h>

struct S {
    int n1, n2, n3;
};

int main() {
    struct S s;
    struct S *p = &s;

    printf("Enter first number: ");
    scanf("%d", &p->n1);
    printf("Enter second number: ");
    scanf("%d", &p->n2);

    p->n3 = p->n1 + p->n2;

    printf("Sum stored in third number: %d\n", p->n3);
    return 0;
}
