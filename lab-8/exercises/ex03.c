#include <stdio.h>

int i;

struct data {
    int i;
    int j;
};

void fain1(int *a, int b);
void fain2(int *a, int *b);
void fct(struct data x, struct data y, struct data z);

int main(void) {
    int i = 0;
    int j = 15;
    struct data X, Y, Z;
    X.i = 10;
    X.j = 20;

    fain1(&i, j);
    printf("\ni=%d, j=%d", i, j);

    fain2(&i, &j);
    printf("\ni=%d, j=%d", i, j);

    fct(X, Y, Z);

    printf("\nW.i=%d, W.j=%d", X.i, X.j);
    printf("\nX.i=%d, X.j=%d", X.i, X.j);
    printf("\nY.i=%d, Y.j=%d", Y.i, Y.j);
    printf("\nZ.i=%d, Z.j=%d", Z.i, Z.j);

    return 0;
}

void fain1(int *a, int b) {
    *a = *a + 3;
    b = b + 2;
}

void fain2(int *a, int *b) {
    *a = *a + 3;
    *b = *b + 2;
}

void fct(struct data x, struct data y, struct data z) {
    x.i = 2;
    y.i = 5;
    z.j = 7;
}
